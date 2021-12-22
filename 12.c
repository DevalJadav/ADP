#include <stdio.h>
void main()
{
    int n, a = 0;
    printf("enter value\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
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