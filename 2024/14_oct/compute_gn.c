#include<stdio.h>

int G(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }
    int x = G(n-1)+G(n-2)+G(n-3);
    return x;
}

int main()
{
    int n;
    scanf("%d",&n);
    int x = G(n);
    printf("G(n) is %d\n",x);
}