// Write a program find whether a number is a composite number.
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n, result;
    n = input_number();
    result = is_composite(n);
    output(n, result);
    return 0;
}
int input_number()
{
    int x;
    printf("enter the number: ");
    scanf("%d", &x);
    return x;
}
int is_composite(int n)
{
    int i;
    if (n <= 1) 
    {
        return 0;
    }
    for (i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            return 1;
        }
    }
    return 0;
}
void output(int n, int result)
{
    if(result == 1)
    {
        printf("the number is a composite number %d", n);
    }
    else
    {
        printf("the number is not a composite number %d", n);
    }
}