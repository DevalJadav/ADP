/*
write a program to accept 3 number from user and give choice to user.
a. Substraction
b. Addition
c. Division
d. Multiplication
e. Modulus
*/

#include <stdio.h>

int main()
{
    int choice, a, b, c;
    index:
    printf("Press 1 for Substraction\nPress 2 for Addition\nPress 3 For Division\nPress 4 for Multiplication\nPress 5 for Modulus\n");
    printf("Enter Your Choice: \n");
    scanf("%d", &choice);

    printf("Enter Your Two Number: \n");
    scanf("%d %d %d", &a, &b, &c);

    switch (choice)
    {
    case 1:
        /* code */
        printf("Substraction of %d, %d and %d is %d\n", a, b, c, a - b - c);
        break;

    case 2:
        /* code */
        printf("Addition of %d, %d and %d is %d\n", a, b, c, a + b + c);
        break;

    case 3:
        /* code */
        printf("Division of %d, %d and %d is %d\n", a, b, c, a / b / c);
        break;

    case 4:
        /* code */
        printf("Multiplication of %d, %d and %d is %d\n", a, b, c, a * b * c);
        break;

    case 5:
        /* code */
        printf("Modulus of %d, %d and %d is %d\n", a, b, c, a % b % c);
        break;

    default:
        printf("Please Enter Valid Values: \n");
        break;
    }

    index2:
    printf("Press 0 for exit\n Press 1 For Continue \n choice: ");
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