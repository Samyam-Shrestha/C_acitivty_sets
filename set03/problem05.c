// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
    int n;
    n = input_array_size();
    int a[n];
    init_array(n, n);
    erotosthenes_sieve(n, n);
    output(n, n);
    return 0;
}
int input_array_size()
{
    int n;
    printf("enter the array size: ");
    scanf("%d", &n);
    return n;
}
void init_array(int n, int a[n])
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        printf("Enter a number :");
        scanf("%d", a[i]);
    }
}
void erotosthenes_sieve(int n, int a[n])
{

}
void output(int n, int a[n])
{

}