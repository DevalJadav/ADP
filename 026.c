//Write a C program to accept the 2 numbers from the user and find which one is bigger.
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter Your First Number: \n");
    scanf("%d", &a);
    printf("Enter Your Second Number: \n");
    scanf("%d", &b);
    
    if(a > b)
    {
        /* code */
        printf("%d is bigger than %d", a, b);
    }
    else if (a == b)
    {
        /* code */
        printf("%d and %d are same", a, b);
    }
    else
    {
        /* code */
        printf("%d is bigger than %d", b, a);
    }
}