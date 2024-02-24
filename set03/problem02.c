// Write a program to find whether the given 3 points form a triangle
#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
    float x1,y1,x2,y2,x3,y3,result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the point x1 and y1: \n");
    scanf("%f %f",x1,y1);

    printf("Enter the point x2 and y2: \n");
    scanf("%f %f",x2,y2);

    printf("Enter the point x3 and y3: \n");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int result;
    float d1,d2,d3;
    d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    d2=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    d3=sqrt(pow(x3-x2,2)+pow(y3-y2,2));

    if(d1+d2>d3 && d2+d3>d1 && d1+d3>d2)
    {
        result=1;
    }
    else
    {
        result=0;
    }
    return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) do form a triangle \n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) does not form a triangle \n",x1,y1,x2,y2,x3,y3);
    }
}
