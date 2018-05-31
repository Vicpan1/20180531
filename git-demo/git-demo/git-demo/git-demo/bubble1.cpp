#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int const *NumBers,int *NumBerss,const int const Time)
{
    int Temp=0;
    int a=0, j=0;
    for( a = 0;a<Time; a++) {
        for( j=a;j< Time;j++) {
            if( NumBerss[j] > NumBerss[a] ) 
            {
                Temp = NumBerss[j];
                NumBerss[j] = NumBerss[a];
                NumBerss[a] = Temp;
            }
        }
    }
}
