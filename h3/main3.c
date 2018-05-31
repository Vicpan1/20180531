#include <stdio.h>
#include <stdlib.h>
#define Size 10
void Bubble(const int* ,int *,int);

int main()
{
   int num[10]={4,9,5,10,1,6,7,3,2,8};
    int x=0;
    printf("排序前:");
    
     for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
    Bubble(num, num, 10);
    printf("\n\n排序後:");
    for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
