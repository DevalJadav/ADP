#include<stdio.h>

int main()
{
    int a[100000], b[100000], i, x, y, sum;

    printf("Enter Number of A Array: \n");
    scanf("%d", &x);

    printf("Enter Number of B Array: \n");
    scanf("%d", &y);
    
    printf("Enter A and B array Values\n");
    for (i = 0; i < x; i++)
    {
        /* code */
        printf("a[%d] :", i);
        scanf("%d", &a[i]);
        printf("b[%d] :", i);
        scanf("%d", &b[i]);
    }
    
    //Addition
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < x; i++)
    {
        /* code */
        sum = a[i] + b[i];
        printf("%d + %d = %d\n", a[i], b[i], sum);
    }

    //Substraction
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < x; i++)
    {
        /* code */
        sum = a[i] - b[i];
        printf("%d - %d = %d\n", a[i], b[i], sum);
    }

    //Multiplication
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < x; i++)
    {
        /* code */
        sum = a[i] * b[i];
        printf("%d * %d = %d\n", a[i], b[i], sum);
    }

    //Division
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < x; i++)
    {
        /* code */
        sum = a[i] / b[i];
        printf("%d / %d = %d\n", a[i], b[i], sum);
    }

    //Modulus
    printf("\nAddition of Two Array: \n");
    for (i = 0; i < x; i++)
    {
        /* code */
        sum = a[i] % b[i];
        printf("%d mod %d = %d\n", a[i], b[i], sum);
    }
    

}