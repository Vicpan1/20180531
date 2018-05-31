#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *const NumBers,int const Time)
{
    int *Temp=0;
    int x=0, j=0, i=0;
    for(x=0;  x<Time; x++) {
        for(j=x; j<Time; j++) {
            if( NumBers[j] > NumBers[x] ) 
            {
                Temp = NumBers[j];
                NumBers[j] = NumBers[x];
                NumBers[x] = Temp;
            }
        }
    }
  return 0;
}
