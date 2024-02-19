// Write a program to find nth number in fibonacci sequence.
#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n, result;
    n = input();
    result = find_fibo(n);
    output(n, result);
    return 0;
}
int input()
{
    int x;
    printf("enter the value of n: ");
    scanf("%d", &x);
    return x;
}
int find_fibo(int n)
{

}
void output(int n, int fibo)
{

}