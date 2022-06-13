#include<stdio.h>

/**
 * main - using sizeof to dynamically determine the size of char int and float
 * 
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int *p;

    n = 98;
    p = &n;
    printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
    printf("size of type 'int' on my computer: %lu bytes\n", sizeof(int));
    printf("size of type 'float' on my computer: %lu bytes\n", sizeof(float));
    printf("size of type of my variable n on my computer: %lu bytes\n", sizeof(n));

    printf("print the address of the variable n: %p\n", &n);
    printf("Size of the pointer: %lu\n", sizeof(p));
    printf("The address of the variable 'p': %p\n", &p);
    printf("The value of varible p: %p\n", p);
    return (0);
}