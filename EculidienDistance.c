#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    printf("enter the coordinates first point: \n");
    scanf("%d %d", &x1, &y1);
    printf("enter the coordinates second point: \n");
    scanf("%d %d", &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2)) + (pow(y2 - y1, 2));
    printf("the distance is: %.2f", distance);
    return 0;
}
