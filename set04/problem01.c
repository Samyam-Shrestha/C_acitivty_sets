// Write a program to find sum of two fractions
#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int main()
{
    int n1,d1,n2,d2,rn,rd;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&rn,&rd);
    output(n1,d1,n2,d2,rn,rd);
}
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator of the first number: ");
    scanf("%d",num1);
    printf("Enter the denominator of the first number: ");
    scanf("%d",den1);
    printf("Enter the numerator of the second number: ");
    scanf("%d",num2);
    printf("Enter the denominator of the second number: ");
    scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{

}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{

}

