#include<stdio.h>

int main()
{
    /* code 
    b= birth year c= currentyear
    */
    int b, c;
    printf("Enter Your Birth Year: \n");
    scanf("%d", &b);
    printf("Your Birth Year is: %d\n", b);
    c=2021;
    printf("Your age is: %d - %d = %d", c, b, c-b);
    return 0;
}