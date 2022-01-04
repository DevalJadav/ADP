#include <stdio.h>

int main()
{
    int a = 5, b, c = 10;
    c = c+a--;
    b = ++c -a;
    printf("%d %d %d", a, b, c);
    return 0;
}