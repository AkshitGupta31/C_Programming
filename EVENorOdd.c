#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    (num & 1)
        ? printf("The number is odd")
        : printf("The number is even");
    return 0;
}
