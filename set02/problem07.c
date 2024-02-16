// Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} ;
typedef struct _triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main()
{
    Triangle sum, Base, Altitude;
    Base = input_triangle();
    Altitude = input_triangle();
    find_area(&sum);
    output(sum);

}
Triangle input_triangle()
{
    Triangle i;
    printf("Enter the base of the triangle: ");
    scanf("%f", &i.base);
    printf("Enter the Height of the triangle: ");
    scanf("%f", &i.altitude);
    return i;
}
void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
    printf("The area of the triangle with base %f and height %f is %fsq units",t.base,t.altitude,t.area);
}