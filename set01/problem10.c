// Write a C program to compare two strings, character by character.
// For example, `Hello` should be equal to `Hello`, but not equal to `hello`.
// `Hello` will be lesser than `Hellw` (alphabetical order).
#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
    char string1[100], string2[100], result;
    input_two_strings(&string1, &string2);
    stringcompare(string1, string2);
    output(string1, string2, result);

}
void input_two_strings(char *string1, char *string2)
{
    printf("enter the first string: ");
    scanf("%s", string1);
    printf("enter the second string: ");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{
    int i;
    while(i = 0, string1 >= string2 || string2 >= string1, i++)
    {

    }
}
void output(char *string1, char *string2, int result)
{
    if(result == 0)
    {
        printf("the laregst is %s", string1);
    }
    else if(result == 1)
    {
        printf("the laregst is %s", string2);
    }
    else
    {
        printf("none");
    }
}