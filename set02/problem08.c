//08. Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(Triangle smallest);

int main() 
{
    int n = input_n();
    Triangle tri[n];
    input_n_triangles(n, tri);
    find_n_areas(n, tri);
    Triangle smtri = find_smallest_triangle(n, tri);
    output(smtri);
    return 0;
}

int input_n() 
{
    int n;
    printf("Enter the number of triangles: \n");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle() 
{
    Triangle t;
    printf("Enter the base of the triangle: \n");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: \n");
    scanf("%f", &t.altitude);
    return t;
}

void input_n_triangles(int n, Triangle t[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

void find_n_areas(int n, Triangle t[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest = t[0];
    for (int i = 1; i < n; i++)
    {
        if (t[i].area < smallest.area)
        {
            smallest = t[i];
        }
    }
    return smallest;
}

void output(Triangle smallest) 
{
    printf("Triangle with the smallest area is:\n");
    printf("Base: %.2f\n", smallest.base);
    printf("Altitude: %.2f\n", smallest.altitude);
    printf("Area: %.2f\n", smallest.area);
}