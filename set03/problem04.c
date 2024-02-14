// Write a program to find nth number in fibonacci sequence.
#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int a, result;
    a = input();
    result = find_fibo(a);
    output(a, result);
    return 0;
}
int input()
{
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    return x;
}
int find_fibo(int n)
{
    int a[n];
    for(int i=2;i<=n;i++)
    {
        a[0]=0,a[1]=1;
        
        a[i]=a[i-1]+a[i-2];
    }
    return a[n];
}
void output(int n, int fibo)
{
    printf("fibonaci series of %d is %d", n, fibo);
}