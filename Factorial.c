#include<stdio.h>
void main()
{
    int num1, num2=1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    for(int i=1; i<=num1; ++i){
        num2=num2*i;
    }
    printf("The factorial of %d is %d",num1,num2);
}