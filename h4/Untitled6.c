#include <stdio.h>
#include <stdlib.h>
void Bubble(int *NumBers, int vic, int Time)
{
    int step=0;
    int x=0, j=0;
    for(x=0; x<Time; x++) {
        for(j=x; j<Time; j++) {
            if( NumBers[j] > NumBers[x] ) 
            {
            step = NumBers[j];
                NumBers[j] = NumBers[x];
                NumBers[x] = step;
            }
        }
    }
}
