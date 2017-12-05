#include "Rotate.h"

void blockswap(char* str, int n, int d)
{
    int i,j;
    int swap;
    int *temp;
    if(d>0)
    {
        swap = n - d;
        temp = (int*)malloc(sizeof(int)*d);
        for(i=0;i<d;i++)
            temp[i] = str[i];
        for(i=d,j=0;i<n;i++,j++)
            str[j]=str[i];
        for(i=0;i<d;i++)
            str[swap++]=temp[i];
        free(temp);
    }
    else
    {
        int Dcal=-d;
        swap = n - Dcal;
        temp = (int*)malloc(sizeof(int)*Dcal);
        for(i=swap,j=0;i<n;i++,j++)
            temp[j]=str[i];
        for(i=n-1,j=swap-1;j>=0;i--,j--)
            str[j]=str[i];
        for(i=0;i<Dcal;i++)
            str[i]=temp[i];
        free(temp);
    }
}

