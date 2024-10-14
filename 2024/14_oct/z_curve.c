#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void z_curve_aux(int ** matrix,int top, int left, int n)
{
    // int i;
    if(n == 1)
    {
        printf("%d %d %d %d ",matrix[top][left],matrix[top][left+1],matrix[top+1][left],matrix[top+1][left+1]);
        return;
    }
    z_curve_aux(matrix,top,left,n-1);
    z_curve_aux(matrix,top,left + (1 << (n-1)),n-1);
    z_curve_aux(matrix,top + (1 << (n-1)),left,n-1);
    z_curve_aux(matrix,top + (1 << (n-1)),left + (1 << (n-1)),n-1);

}

void z_curve(int ** A, int m)
{
    if(m == 0)
    {
        printf("%d ",A[0][0]);
        return;
    }
    z_curve_aux(A,0,0,m-1);
    z_curve_aux(A,0,1 << (m-1),m-1);
    z_curve_aux(A,1 << (m-1),0,m-1);
    z_curve_aux(A,1 << (m-1),1 << (m-1),m-1);
}

int main()
{
    int m;
    scanf("%d",&m);
    printf("\n");
    int row = 1 << m;
    int col = 1 << m;
    int ** arr = (int **)malloc(row*sizeof(int*));
    for(int i = 0;i<row;i++)
    {
        arr[i] = (int *)malloc(col*sizeof(int));
    }
    //int arr[row][col];
    int count = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            count++;
            arr[i][j] = count;
        }
    }
    z_curve(arr,m);
    return 0;
}