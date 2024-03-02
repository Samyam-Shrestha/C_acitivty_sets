// Write a program to check if the given number is prime
#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n,result;
    n = input_number();
    result = is_prime(n);
    output(n, result);
    return 0;
}
int input_number()
{
    int x;
    printf("Enter the number :\n");
    scanf("%d",&x);
    return x;
}
int is_prime(int n)
{
    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            result++;
        }
        else
        {
            continue;
        }
    }
    return result;
}
void output(int n, int result)
{
    if(result==2)
    {
        printf("The number %d is a prime number \n",n);
    }
    else if(result>2)
    {
        printf("The number %d is a composite number \n",n);
    }
    else
    {
        printf("The number is neither composite nor prime number \n");
    }
}