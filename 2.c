#include <stdio.h>

int main()
{
    /* code */
    int a, b;
    printf("Enter The Value: \n");
    scanf("%d %d", &a, &b);
    printf("A = %d ,B = %d\n", a, b);
    printf("Total = %d\n", a%b);
    return 0;
}