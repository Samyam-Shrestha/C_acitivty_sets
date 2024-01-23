// Write a C program to add two numbers using **pass by reference**
#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int num1, num2, result;
    
    add(num1, num2, &result);
    output(num1, num2, result);

}
void input(int *a, int *b)
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    return x;
}
void add(int a, int b, int *sum)
{
    *sum = a + b;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d is: %d", a, b, sum);
}