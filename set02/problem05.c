// Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a, b, result;
    a = input();
    b = input();
    result = find_gcd(a, b);
    output(a, b, result);
}
int input()
{
    int n;
    printf("enter the GCD: ");
    scanf("%d", &n);
    return n;
}
int find_gcd(int a, int b)
{
    int gcd;
    for(int i = 1; i<= a ||  i <=b ;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
void output(int a, int b, int gcd)
{
    printf("the GCD of %d and %d is: %d", a, b, gcd);
}