#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], i, j;
    for (i = 0; i < 2; i++) // getting both arrays value from user
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter value of a[%d][%d] : ", i, j);
                scanf("%d", &a[i][j]);
                printf("Enter value of b[%d][%d] : ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
    printf("addition of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d + %d = %d \n", a[i][j], b[i][j], a[i][j] + b[i][j]);
        }
    }
    printf("Substracrion of two loop is\n");
    for (i = 0; i < 2; i++) // Printing sum of two arrays
    {

        11

            for (j = 0; j < 2; j++)
        {
printf("%d - %#include <stdio.h>

void main()
{
    int a[5], b[5], c[5], sum = 0, avg, i;
    printf("enter a and b array values\n");
    for (i = 0; i < 5; i++)
    {
    printf("a[%d] :", i);
    scanf("%d", &a[i]);
    printf("b[%d] :", i);
    scanf("%d", &b[i]);
    }
    //addition
    printf("\nadditon of two array: \n");
    for (i = 0; i < 5; i++)
    {
    c[i] = a[i] + b[i];
    printf("%d + %d = %d\n", a[i], b[i], c[i]);
    }
    // substraction
    printf("\nsubstraction of two array: \n");
    for (i = 0; i < 5; i++)
    {
    c[i] = a[i] - b[i];
    printf("%d - %d = %d\n", a[i], b[i], c[i]);
    }
    // multiplication
    printf("\nMultplication of two array: \n");
    for (i = 0; i < 5; i++)
    {
    c[i] = a[i] * b[i];
    12
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