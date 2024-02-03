// Write a C program to compare two strings, character by character.
// For example, `Hello` should be equal to `Hello`, but not equal to `hello`.
// `Hello` will be lesser than `Hellw` (alphabetical order).
#include <stdio.h>
#include <string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    int result;
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    result=stringcompare(string1, string2);
    printf("result is %d\n", result);
    output(string1, string2, result);
    return 0;
}

void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s[^\n]", string1);
  printf("Enter the second string\n");
  scanf("%s[^\n]", string2);
}

int stringcompare(char *string1, char *string2)
{
  int i=0;
  for(i=0;string1[i]!='\0' && string2[i]!='\0' && string1[i]==string2[i];i++);

  if(string1[i]==string2[i])
    return 0;
  if(string1[i]>string2[i])
    return 1;
  else return 2;
}

void output(char *string1, char *string2, int result)
{
  if(result==0)
    printf("%s is equal to %s\n", string1, string2);
  else if(result==1)
    printf("%s is greater than %s\n", string1, string2);
  else if(result==2)
    printf("%s is greater than %s\n", string2, string1);
}