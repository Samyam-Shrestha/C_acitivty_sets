// Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
    int a, b, c, result;
    a = input_side();
    b = input_side();
    c = input_side();
    result = check_scalene(a, b, c);
    output(a, b, c, result);
    return 0;
}
int input_side()
{
    int n;
    printf("enter the side: ");
    scanf("%d", &n);
    return n;
}
int check_scalene(int a, int b, int c)
{
    if(a != b && a != c && b != c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene)
    {
        printf("The triangle is scalen with sides %d, %d and %d.", a, b, c);
    }
    else 
    {
        printf("The triangle is not scalen");
    }
}
