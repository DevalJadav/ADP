#include <stdio.h>

int main()

{
    int n = 2, i, c = 0;

    int count = 1;

    printf("prime numbers are\n %d\t", 1);

    while (n <= 20) // you can increase the value of n.

    {

        for (i = 1; i <= n; i++)

        {

            if (n % i == 0)

            {

                c++;
            }
        }

        if (c == 2)

        {

            printf("%d\t", n);

            count++;
        }

        c = 0;

        n++;
    }

    printf("\ntotal prime numbers are %d\n \n", count);

    return 0;
}