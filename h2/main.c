#include <stdio.h>
#include <stdlib.h>
void Bubble(int*const ,int const);

int main()
{
    int num[10]={8,4,9,6,7,3,2,10,1,5};
    int x=0;
    printf("�Ƨǫe:");
    
     for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
   
    BubbleSort(num, 10);
   
    printf("\n\n�Ƨǫ�:");
    for(x=0; x<10; x++) {
        printf("%3d", num[x]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
