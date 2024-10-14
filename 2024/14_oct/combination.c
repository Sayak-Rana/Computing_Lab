#include<stdio.h>

int combination(int n, int r)
{
    if(n<r)
    {
        return 0;
    }
    if(n == r)
    {
        return 1;
    }
    if(r == 0)
    {
        return 1;
    }
    return combination(n-1,r)+combination(n-1,r-1);
}
int main()
{
    int n,r;
    printf("Enter n and r respectively: ");
    scanf("%d %d",&n,&r);
    int x = combination(n,r);
    printf("Answer is : %d\n",x);
}