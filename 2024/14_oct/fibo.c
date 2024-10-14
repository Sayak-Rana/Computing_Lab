#include<stdio.h>

int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    int x = fibo(n-1) + fibo(n-2);
    return x;

}
int main()
{
    int n;
    scanf("%d",&n);
    int x = fibo(n);
    printf("(n+1)th fibonacci num is %d\n",x);
}