// Write a program to reverse a string.
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char a[100], reverse[100];
    input_string(a);
    str_reverse(a, reverse);
    output(a, reverse);
}
void input_string(char *a)
{
    printf("Enter the string: ");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{
    int length = 0;
    int i;
    while(str[length] != 0)
    {
        length++;
    }
    for(i = 0; i < length; i++)
    {
        rev_str = str[length - i - 1];
    }

}
void output(char *a, char *reverse_a)
{
    printf("the orginal is %s and the reverse string is: %s", a ,reverse_a);
}