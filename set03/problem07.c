// Write a program to find the length of a line
#include <stdio.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main()
{

}

Point input_point()
{
    Point p;
    printf("enter the first x-Cordinate: \n");
    scanf("%f", &p.x);
    printf("enter the y-Cordinate: \n");
    sscanf("%f", &p.y);
    return p;   

}
Line input_line()
{

}
void find_length(Line *l)
{

}
void output(Line l)
{

}