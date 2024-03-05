// Write a program to find the index of a substring in a string
#include <stdio.h>
#include <string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char a[100],b[100];
    int index;
    input_string(a,b);
    index=sub_str_index(a,b);
    output(a,b,index);
}
void input_string(char* a, char* b)
{
    printf("Enter the string : \n");
    scanf("%s",a);
    printf("Enter the substring : \n");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring)
{
    int strl = strlen(string);
    int subl = strlen(substring);

    for (int i = 0; i<= strl - subl; i++)
    {
        int j;
        for(j=0; j< subl; j++)
        {
            if (string[i+j] != substring[j])
            {
                break;
            }
        }
        if(j == subl){
            return i;
        }
    }

    return -4;
}
void output(char *string, char *substring, int index)
{
    if(index!= -4){
        printf("The index of %s in %s is %d \n",substring,string,index);
    }
    else{
        printf("%s not found in the string %s",substring, string);
    }
}