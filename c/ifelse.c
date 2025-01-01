//if  number a  is greater than  b then print a is greater else b is greater
#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    int i = 1;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter b number : ");
    scanf("%d",&b);
    if (a>b){
        printf("%d is greater than %d.\n", a, b);
    }
    else if (a==b){
        printf("Both are equal.\n");
    }
    else{
    printf("%d is greater than %d. \n", b, a);
    }
    while (i <= 5) {
        printf("%d ", i);
        i++; // Increment the value of i by 1 in each iteration
    }
    while(a<=57){
        printf("%d \n",a);
    }
    getch(); //if getch is used then the program will take instruction to close.
}