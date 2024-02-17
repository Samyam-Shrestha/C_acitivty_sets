// Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
    Triangle T1;
    T1 = input_triangle();
    find_area(&T1);
    output(T1);
}
Triangle input_triangle()
{
    Triangle T1;
    printf("Enter the base of the triangle: ");
    scanf("%f", &T1.base);
    printf("Enter the Height of the triangle: ");
    scanf("%f", &T1.altitude);
    return T1;
}
void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)

{
    printf("The area of the triangle with base %f and height %f is %fsq units",t.base,t.altitude,t.area);
}