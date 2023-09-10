//	3.	WAP to input the length and breadth of a rectangle and calculate area and perimeter.
#include <stdio.h>
int main()
{
    int l1, l2, area, perimeter;
    printf("Enter length and breadth of rectangle : ");
    scanf("%d %d", &l1, &l2);
    area=l1*l2;
    perimeter=l1+l2;
    printf("The area of rectangle is %d.\n",area);
    printf("The perimeter of rectangle is %d.",perimeter);
    
    return 0;
}