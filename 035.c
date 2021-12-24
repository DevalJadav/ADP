//Write a C program to print all divisors of a given number. E.g. divisors of 50 =1 ,2,5,10,50

#include<stdio.h>

int main()
{
    int i, n;
    printf("Enter The Number: \n");
    scanf("%d", &n);
    printf("The Divisors are: \n");
    for (i = 1; i <= n; i++)
    {
        /* code */
        if (n%i == 0)
        {
            /* code */
            printf("%d ", i);
        }
        
    }
    return 0;
}