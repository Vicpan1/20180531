#include <stdio.h>
#include <stdlib.h>
void Bubble(const int const *num,int *nums,const int const Time)
{
    int Temp=0;
    int x=0, j=0;
    for(x=0; x<Time; x++) {
        for( j=x; j<Time; j++) {
            if( nums[j] > nums[x] ) 
            {
                Temp = nums[j];
                nums[j] = nums[x];
                nums[x] = Temp;
            }
        }
    }
}
