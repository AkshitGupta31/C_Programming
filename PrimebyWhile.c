#include <stdio.h>
int main()
{
    int n, i, count = 0;

    printf("Enter number : ");
    scanf("%d", &n);
    i = 2;
    while (i <= n / 2)
    {
        // check for non prime number
        if (n % i == 0)
        {
            count = 1;
            break;
        }
        i++;
    }

    if (count == 0)
        printf("It is a prime number.");
    else
        printf("It is not a prime number.");

    return 0;
}
