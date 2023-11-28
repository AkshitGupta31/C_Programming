// 5! = 5*4*3*2*1
#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d", &x);
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    printf("the value of factorial is %d", fact);
    return 0;
}
