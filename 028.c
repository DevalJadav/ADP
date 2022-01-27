#include<stdio.h>

int main()
{
    int a, b, c, i, n;
    printf("Enter Your Number: \n");
    scanf("%d", &n);
    printf("Table of: %d\n",n);
    for (i = 1; i <= 10; i++)
    {
        /* code */
        b = n * i;
        printf("%d x %d = %d\n", n, i, b);
    }
}