#include<stdio.h>

void hanoi(int n,int src,int dest,int intermediate)
{
    if(n<=0)
    {
        return;
    }
    if(n==1)
    {
        printf("Move disk from pole %d to %d\n",src,dest);
        return;
    }
    hanoi(n-1,src,intermediate,dest);
    printf("Move disk from pole %d to %d\n",src,dest);
    hanoi(n-1,intermediate,dest,src);
}

int main()
{
    hanoi(3,1,2,3);
    return 0;
}
