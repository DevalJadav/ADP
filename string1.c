/* 
Write a program to perform following operation string operations with help of string
manipulation functions.(Using switch case statement)
a. Addition
b. Substraction
c. Multiplication
d. Division
e. Modulus
*/

#include<stdio.h>

int main()
{
    int choice, a, b;
    index:
    printf("Press 1 for Addition\n Press 2 for Substraction\n Press 3 Multiplication\n Press 4 for Division\n Press 5 for Modulus\n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);

    printf("Enter Your Two Number: \n");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        /* code */
        printf("Addition of %d and %d is %d\n", a, b, a+b);
        break;
    
    case 2:
        /* code */
        printf("Substraction of %d and %d is %d\n", a, b, a-b);
        break;
        
    case 3:
        /* code */
        printf("Multiplication of %d and %d is %d\n", a, b, a*b);
        break;

    case 4:
        /* code */
        printf("Division of %d and %d is %d\n", a, b, a/b);
        break;

    case 5:
        /* code */
        printf("Modulus of %d and %d is %d\n", a, b, a%b);
        break;

    default:
        printf("Please Enter Valid Values: \n");
        break;
    }

    index2:
    printf("Press 0 for exit\n Press 1 For go to index \n choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        /* code */
        goto index;
    }
    else if (choice == 0)
    {
        /* code */
        printf("Exiting Program.......\n");
    }
    else
    {
        /* code */
        printf("Enter Valid Value: \n");
        goto index2;
    }
}