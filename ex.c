#include<stdio.h>

int main()
{
    int n, i, a, b;

    printf("Enter Your Number: \n");
    scanf("%d", &n);
    printf("The first prime number between 1 and %d\n", n);

    for (a = 1; a <= n; a++)
    {
        
        b = 0;

        for (i = 2; i <= a / 2; i++)
        {
            
            if (a % i == 0)
            {
                
                b++;
                break;
            }
            
        }

        if(b == 0 && a != 1)
            printf("%d ", a);
        
    }
    printf("\n");

}