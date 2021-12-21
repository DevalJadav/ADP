#include <stdio.h>

int main()
{
    /* code */
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Table of %d: \n", n);

    for (i = 1; i <= 10; i++)
    {
        /* 6 x 1 = 6
        n x i = j */
        j = n * i;
        printf("%d * %d = %d\n", n, i, j);
    }
    return 0;
}