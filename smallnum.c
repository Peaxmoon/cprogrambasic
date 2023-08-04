#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    printf("Enter three differnt numbers \n for finding smallest number : ");
    scanf("%d%d%d",&a, &b, &c);
    //smaller number between 3 variables.
    // a<b<c a is smaller
    //      b<c<a b is smaller
    //          c<b<a or c<a<b c is smaller
    if(a<b) //a is smaller than b
    {
        if(a<c)  // a is smaller than c
        {
            printf("a is smallest");
        }
        else //c is smaller
        {
            printf("c is smallest");
        }
    }// else b is greater 
    else if(c<b) //c is smaller
    {
        printf("c is smaller.");
    }
    else
    {
        printf("b is smaller");
    }
    getch();
}
