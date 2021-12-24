// Write a C program to display first n even numbers and also print their sum.
#include <stdio.h>

int main()
{
    int n, a = 0, b = 0, i = 1;
    printf("Enter Your Number: \n");
    scanf("%d", &n);
    printf("First %d Even Numbers are:- ", n);
    while (a < n)
    {
        /* code */
        if (i%2 == 0)
        {
            /* code */
            printf("%d ", i);
            a++;
            b = b + i;
        }
        i++;
        
    }
    printf("\nAnd their sum is %d\n", b);
    return 0;
}