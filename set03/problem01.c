// Write a program to find the distance between 2 points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1, y1, x2, y2, result;
    input( &x1, &y1, &x2, &y2 );
    result = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, result);
}   
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Input point A (x,y): ");
    scanf("%f %f", x1, y1);
    printf("Input point  B (x,y): ");
    scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n", x1, y1, x2, y2, distance);
}