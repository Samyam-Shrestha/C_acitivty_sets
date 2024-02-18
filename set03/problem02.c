// Write a program to find whether the given 3 points form a triangle.
#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1, y1, x2, y2, x3, y3, result;
    input_triangle(&x1, &x2, &x3, &y1, &y2, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the point (x1, y1): ");
    scanf("%f %f", x1, y1);
    printf("enter the point (x2, y2): ");
    scanf("%f %f", x2, y2);
    printf("enter the point (x3, y3): ");
    scanf("%f %f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int result;
    float distance1, distance2, distance3;
    distance1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    distance2 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    distance3 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    if(distance1 + distance2 > distance3 && distance2 + distance3 > distance1 && distance1 + distance3 > distance2) 
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
    if(result == 11)
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) do form a triangle \n",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("The points (%f, %f), (%f, %f) and (%f, %f) does not form a triangle \n",x1,y1,x2,y2,x3,y3);
    }
}