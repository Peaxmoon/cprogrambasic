#include <stdio.h>
#include <conio.h>
int main() {
    int length, breadth, area; //make int l b and area to store of rectangle.
    printf("Hello, Woman\n Enter the length and breadth of rectangle : ");//take l b from user
    scanf("%d %d", &length, &breadth);//scan the input.
    area = length * breadth;//execute the area by using area = length * breadth.
    printf("The area of rectangle is %d units.", area);
    return 0;
}
