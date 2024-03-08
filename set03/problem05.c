// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
#include <math.h>

int input_array_size();
void int_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    int_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}
int input_array_size()
{
    int a;
    printf("Enter the size of the array : \n");
    scanf("%d",&a);
    return a;
}
void int_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        a[i]=i+2;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    int c = sqrt(n);
    for (int i = 2; i <= c; i++)
    {
        if (a[i] != 0)
        {
            for (int j = i * i; j < n + 2; j += i)
            {
                a[j - 2] = 0;
            }
        }
    }
}

void output(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        else 
        {
            printf("%d \n",a[i]);
        }
    }
}