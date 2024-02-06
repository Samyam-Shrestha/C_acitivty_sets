// Write a C program to find the sum of _n_ complex numbers
#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
    Complex complex1, complex2, sum;
    int n;
    Complex number[n];
    int n = get_n();
    input_n_complex(n, number);
    sum = add_n_complex(n, number);
    output(n, number, sum);
    return 0;
}
int get_n()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part: ");
    scanf("%f", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    printf("Enter the complex numbers: ");
    for (int i = 0; i < n; i++) 
    {
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex sum = {0, 0};
    for(int i = 0; i < n; i++)
    {
        sum = add(sum , c[i]);
    }
    return sum;
}
void output(int n, Complex c[n], Complex result)
{

}