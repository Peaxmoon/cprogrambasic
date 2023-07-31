//if  number a  is greater than  b then print a is greater else b is greater
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter b number : ");
    scanf("%d",&b);
    if (a>b)
    printf("a is greater.");
    else
    printf("b is greater.");
    return 0;//int needs return 0 meanwhile void doesn't need any terminational statements.
}