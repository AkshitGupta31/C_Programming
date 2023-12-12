#include <stdio.h>
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    return;
}
int main()
{
    int a = 4, b = 5;
    swap(a, b);
    printf("a is %d and b is %d", a, b);
    return 0;
}
