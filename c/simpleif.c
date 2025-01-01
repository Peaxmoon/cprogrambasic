#include<stdio.h>
#include<conio.h>
void main()
{
    float percent;
    printf("Enter your percentage : ");
    scanf("%f", &percent);
    if(percent>=80)
    {
        printf("Distintion.");
    }
    if(percent>=60&&percent<=80)
    {
        printf("First Division.");
    }
    if(percent>=45&&percent<=60)
    {
        printf("Second Divion.");
    }
    if(percent>=35&&percent<=45)
    {
        printf("Third Divion.");
    }
    if(percent<35)
    {
        printf("You are fail.");
    }
    
    getch();
}
