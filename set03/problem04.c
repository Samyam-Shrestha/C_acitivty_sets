// Write a program to find nth number in fibonacci sequence.
#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n,fibo;
    n = input();
    fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
int input()
{
    int n;
    printf("Enter the nth number you want in fibonacci series : \n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{

}
void output(int n, int fibo)
{

}