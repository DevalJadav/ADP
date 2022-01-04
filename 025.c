// Write a C program to display first n odd numbers and also print their sum.
#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter Your Number: \n");
    scanf("%d", &n);
    printf("First %d Odd Numbers are:- ", n);
    while (i < n)
    {
        /* code */
        if (i%2 != 0)
        {
            /* code */
            printf("%d ", i);
            sum = sum + i;
        }
        i++;
        
    }
    printf("\nAnd their sum is %d\n", sum);
    return 0;
}