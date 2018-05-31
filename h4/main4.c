#include <stdio.h>
#include <stdlib.h>
void Bubble(int* ,int*,int);

int main()
{
   int num[10]={8,6,4,5,2,9,7,1,3,10};
    int x=0;
    printf("排序前:");
    
     for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
   
    Bubble(num,num,10);
   
    printf("\n\n排序後:");
    for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
