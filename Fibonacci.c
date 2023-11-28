// 1 1 2 3 5 8 13 21
#include <stdio.h>
int main()
{
    int x = 10;
    int a = 0, b = 1;
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
