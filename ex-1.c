/* 
Pirnt multiplication table of a number entered by the user in pretty form

Example:
Input
Enter the number you want multiplication table of:
6

Output:
table of 6:
6 x 1 = 6
6 x 2 = 12
.
.
.
6 x 10 =60
25
2.5

*/

#include<stdio.h>

int main()
{
    /* Code */
    int n, i, j;

    printf("Enter the number you want multiplication table of: \n");
    scanf("%d", &n);

    printf("Table of %d: \n", n);
    
    for(i=1; i<=10; i++)
    {
        j=n*i;
        printf("%d * %d = %d\n", n, i, j);
    }

    // printf("Value: %d\n", n);
    return 0;
}