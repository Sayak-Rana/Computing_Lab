#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

// float minima()
// {

// }

// float maxima()
// {

// }

int main()
{
    int N;
    scanf("%d",&N);

    // float * bluex = (float *)malloc(N*sizeof(float));
    // float * bluey = (float *)malloc(N*sizeof(float));
    // float * redx = (float *)malloc(N*sizeof(float));
    // float * redy = (float *)malloc(N*sizeof(float));
    float bl_min_x = 99999,bl_max_y = -99999,bl_max_x = -99999,bl_min_y = 99999;
    float rd_min_x = 99999,rd_max_y = -99999,rd_max_x = -99999,rd_min_y = 99999;
    for(int i = 0 ;i<N; i++)
    {
        float x,y;
        char c;
        scanf("%f %f %c",&x,&y,&c);
        if(c == 'B')
        {
            // bl_max_x = (x > bl_max_x)?x:bl_max_x;
            // bl_min_x = (x < bl_min_x)?x:bl_min_x;
            // bl_max_y = (y > bl_max_y)?y:bl_max_y;
            // bl_min_y = (y < bl_min_y)?y:bl_min_y;
            if(x > bl_max_x)
            {
                bl_max_x = x;
            }
            if(x < bl_min_x)
            {
                bl_min_x = x;
            }
            if(y > bl_max_y)
            {
                bl_max_y = y;
            }
            if(y < bl_min_y)
            {
                bl_min_y = y;
            }
        }
        if(c == 'R')
        {
            // rd_max_x = (x > rd_max_x)?x:rd_max_x;
            // rd_min_x = (x < rd_min_x)?x:rd_min_x;
            // rd_max_y = (y > rd_max_y)?y:rd_max_y;
            // rd_min_y = (y < rd_min_y)?y:rd_min_y;
            if(x > rd_max_x)
            {
                rd_max_x = x;
            }
            if(x < rd_min_x)
            {
                rd_min_x = x;
            }
            if(y > rd_max_y)
            {
                rd_max_y = y;
            }
            if(y < rd_min_y)
            {
                rd_min_y = y;
            }
        }
    }

    printf("Min_x_R is %f and Max_x_R is %f\n",rd_min_x,rd_max_x);
    printf("Min_y_R is %f and Max_y_R is %f\n",rd_min_y,rd_max_y);
    printf("Min_x_B is %f and Max_x_B is %f\n",bl_min_x,bl_max_x);
    printf("Min_y_B is %f and Max_y_B is %f\n\n",bl_min_y,bl_max_y);


    //x-axis
    if((bl_min_y > rd_max_y) || (rd_min_y > bl_max_y))
    {
        printf("X");
    }    
    //for y-axis
    if((rd_max_x < bl_min_x) || (bl_max_x < rd_min_x))
    {
        printf("Y");
    }
    else
    {
        printf("Not possible");
    }
    return 0;
}
