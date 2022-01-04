#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    index:
    printf("Enter Your Number: \n");
    scanf("%d %d", &a, &b);
    printf("%d x %d = %d\n", a, b, a*b);
    printf("Press 0 For Exit\n");
    scanf("%d", &a);
    if (a == 0)
    {
        /* code */
        exit(1);
    }
    goto index;
    return 0;
}