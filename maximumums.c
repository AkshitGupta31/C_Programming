#include <stdio.h>
int main()
{
    int i, n, max = 1, num;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the %d number :", i);
        scanf("%d", &num);
        max = (num > max) ? num : max;
    }
    printf("\n Maximum of a given number is %d", max);
    return 0;
}
