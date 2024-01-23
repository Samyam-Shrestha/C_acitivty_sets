// Write a C program to add two numbers using **pass by value**
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int num1, num2, result;
    num1 = input();
    num2 = input();
    result = add(num1, num2);
    output(num1, num2, result);
    return 0;
}

int input()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    return x;
}

int add(int a, int b)
{
    return a + b;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d number is: %d", a, b, sum);
}
