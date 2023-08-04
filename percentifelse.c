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
    else if(percent>=60)
    {
        printf("First Division.");
    }
    else if(percent>=45)
    {
        printf("Second Divion.");
    }
    else if(percent>=35)
    {
        printf("Third Divion.");
    }
    else
    {
        printf("You are fail.");
    }
    getch();
}
