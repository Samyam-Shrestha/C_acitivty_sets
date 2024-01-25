// Write a C program to find sum of all natural numbers until _n_
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
    int x, result;
    x = input_n();
    result = sum_n_nos(x);
    output(x, result);
    return 0;
}
int input_n()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("the sum of natural number is: %d", sum);
}