#include<stdio.h>
void main()
{
    float radius, area;
    const  float pi = 3.14;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of circle with radius %f is : %f", radius, area);
}