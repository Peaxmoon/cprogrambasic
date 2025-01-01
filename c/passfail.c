// A C program to find a subject and decide whether a student is pass or fail in that subject

#include<stdio.h>
#include<conio.h>
void main()
{
    int mark;
    printf("Enter your mark : ");
    scanf("%d", &mark);
    if(mark>40)
    {
        printf("You are pass.");
    }
    else
    {
        printf("You are fail.");
    }
    getch();
}
