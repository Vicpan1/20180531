#include <stdio.h>
#include <stdlib.h>
void Bubble(const int* const ,int* ,const int const );

int main()
{
   int num[10]={1,5,9,2,6,10,3,7,8,4};
    int x=0; 
    printf("排序前:");
    
     for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
   
    Bubble(num,num,10);
    printf("\n\n排序後:");
    for( x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
