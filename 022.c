//Write a C program to print given number prime or not.
#include <stdio.h>

int main()
{
    int n, a = 0, i;
    printf("enter value\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a++;
        }
    }

    if (a == 2)
    {
        printf("this number is prime number\n");
    }
    else
    {
        printf("this is not a prime number\n");
    }
}