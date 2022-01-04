#include <stdio.h>

void main()
{
    int a[10], days[] = {0, 1, 2, 3, 4, 5, 6}, x[10][2];
    float b[20];
    char name[] = "ABCD PQR";
    printf("sizes are: \n");
    printf(" int a[10] size is %d bytes\n float b[20] size is %d bytes\n char name[] size is %d bytes\n int a[10][2] size is %d bytes\n int days[] size is %d bytes\n ", sizeof(a), sizeof(b), sizeof(name), sizeof(x), sizeof(days));
}