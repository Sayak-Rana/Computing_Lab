#include<stdio.h>
// #define SQR(x) (x * x)   will give 11 
#define SQR(x) ((x) * (x))

int main()
{
    // char arr[10] = "sayak";
    int x = 5, y;
    y = SQR(x+1);
    printf("%d ",y);
}
