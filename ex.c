#include <stdio.h>
int main()
{
     int n,i,t=0; 
    printf("Entr numbr");
    scanf("%d",&n);
    printf("Table for %d is: \n",n);
    for(i=1;i<=10;i++)
    {
         t=n*i;
         printf("%d \n",t);         
    }
    return 0;
}