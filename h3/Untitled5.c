#include <stdio.h>
#include <stdlib.h>
void Bubble(const int *NumBers1,int *NumBers,int Times)
{
    int step=0;
    int x=0, j=0;
    for(x=0; x<Times; x++) {
        for(j=x; j<Times; j++) {
            if(NumBers[j] > NumBers[x]) 
            {
            step = NumBers[j];
                NumBers[j] = NumBers[x];
                NumBers[x] = step;
            }
        }
    }
}
