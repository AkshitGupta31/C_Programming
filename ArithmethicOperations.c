#include <stdio.h>
int main()
{
    int x, y;
    float add, sub, mul, div;
    printf("enter 1st number: ");
    scanf("%d", &x);
    printf("enter 2st number: ");
    scanf("%d", &y);
    add = x + y;
    sub = x - y;
    div = x / y;
    mul = x * y;
    printf("add:%f sub:%f div:%f mul=%f", add, sub, div, mul);
    return 0;
}
