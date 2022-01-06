#include<stdio.h>

int main()
{
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("Enter the value of %d element of the array %d\n", i, marks[i]);
    }
}