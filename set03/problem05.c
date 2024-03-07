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
    int_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;  
}
int input_array_size()
{
    int x;
    printf("Enter the size of the array : \n");
    scanf("%d",&x);
    return x;
}
void init_array(int n, int a[n])
{
    for(int i = 0; i < n; i++)
    {
        printf("enter the array: ");
        scanf("%d", &a[i]);
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    
}
void output(int n, int a[n])
{

}