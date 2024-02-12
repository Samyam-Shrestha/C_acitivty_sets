// Write a program to find the area of a triangle.
#include <stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main()
{
    float a, b, result;
    input(&a, &b);
    find_area(a, b, &result);
    output(a, b, result);
}
void input(float *base, float *height)
{
    printf("enter the base of the triangle: ");
    scanf("%f",  base);
    printf("enter the height of the triangle: ");
    scanf("%f", height);
}
void find_area(float base , float height, float *area)
{
    *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
    printf("the area of the triangle is %f\n", area);
}