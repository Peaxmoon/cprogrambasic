//1.	WAP a program to calculate Simple interest.
#include <stdio.h>
int main()
{
    float si, p, t, r;
    printf("Enter p t and r : ");
    scanf("%f%f%f", &p, &t, &r);
    si = (p * t * r) / 100.0;
    printf("The Simple interst is : %.2f", si);
    return 0;
}
