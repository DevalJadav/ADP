/*WAP to calculate addition, subtraction and multiplication on two 5 size 1-D arrays. Add the result in new array and display the resultant array in a proper format. Also find average of both the arrays. */

#include <stdio.h>

int main()
{
    int a[5], b[5], c[5], sum = 0, avg, i;

    printf("Enter A and B array Values\n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
        printf("b[%d] :", i);
        scanf("%d", &b[i]);
    }

    // Addition
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        c[i] = a[i] + b[i];
        printf("%d + %d = %d\n", a[i], b[i], c[i]);
    }

    // Substraction
    printf("\nSubstraction of Two Array: \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        c[i] = a[i] - b[i];
        printf("%d - %d = %d\n", a[i], b[i], c[i]);
    }

    // Multiplication
    printf("\nMultiplication of Two Array: \n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        c[i] = a[i] * b[i];
        printf("%d * %d = %d\n", a[i], b[i], c[i]);
    }

    // avg og array 1
    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    avg = sum / 5;
    printf("\narray one avg is %d\n", avg);

    // avg og array 2
    for (i = 0; i < 5; i++)
    {
        sum += b[i];
    }
    avg = sum / 5;
    printf("array two avg is %d\n", avg);
}