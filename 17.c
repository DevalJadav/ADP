//Write a C program to print the subtraction of 5 numbers. Accept the numbers from the user.
#include<stdio.h>

int main()
{
    int a, b ,c;
    printf("Enter your number: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Sum Of Three Number %d / %d / %d = %d", a, b, c, a/b/c);

    //printf("Value: %d %d %d", a, b, c);
    return 0;
}   