//Write a C program to accept the 3 numbers from the user and find which one is bigger.
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Your First Number: \n");
    scanf("%d", &a);
    printf("Enter Your Second Number: \n");
    scanf("%d", &b);
    printf("Enter Your Third Number: \n");
    scanf("%d", &c);
    
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is bigger than %d and %d\n", a, b, c);
        }
        else
        {
            printf("%d is bigger than %d and %d\n", c, b, a);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is bigger than %d and %d\n", b, c, a);
        }
        else
        {
            printf("%d is bigger than %d and %d\n", c, a, b);
        }
    }
}