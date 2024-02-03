// Write a C program to find the [square root] using Babylonian Method
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float inp, sqrrt;
    inp=input();
    sqrrt=square_root(inp);
    output(inp,sqrrt);
}

float input()
{
    float inp;
    printf("enter the number:");
    scanf("%f", &inp);
    return inp;
}

float square_root(float n) 
{
  float x_old=1,x_new=n/2;
  float precision=0.000001;
  while(fabs(x_new-x_old)>precision)
    {
      x_old=x_new;
      x_new=(x_old+n/x_old)/2;
    }
    return x_new;
}

void output(float n, float sqrroot)
{
   printf("the squareroot of %f", n);
   printf("  is  %f", sqrroot);
}