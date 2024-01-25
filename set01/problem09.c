// Write a C program to find the [square root]
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n, sqroot;
    n = input();
    square_root(n, sqroot);
    output(n, sqrroot);

}
float input()
{
    float x;
    printf("enter the number: ");
    scanf("%d", &x);
    return x;
}
float square_root(float n)
{

}
void output(float n, float sqrroot)
{
    printf("The Square Root of %f is :%f\n", n, sqrroot);
}