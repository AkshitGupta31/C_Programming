#include <stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f", &r);
    float area, peri;
    area = 3.14 * r * r;
    peri = 2 * 3.14 * r;
    printf("area of circle=%f \n", area);
    printf("perimeter of circle=%f \n", peri);
    float l, b;
    printf("enter length and bradth");
    scanf("%f%f", &l, &b);
    float a, p;
    a = l * b;
    p = 2 * (l + b);
    printf("area of rectangle=%f \n", a);
    printf("perimeter of rectangle=%f \n", p);
    float s;
    printf("enter side");
    scanf("%f", &s);
    float ar, pr;
    ar = s * s;
    pr = 4 * s;
    printf("area of square=%f \n", ar);
    printf("perimeter of square=%f \n", pr);
}
