//to find the sum and average of 10 numbers stored in an array..
#include<stdio.h>
#include<conio.h>
void main()
{
    int array[10], sum=0,i;
    float average;
    for(i=0;i<10;i++){
    printf("Enter %d numbers : ",i+1);
    scanf("%d",&array[i]);
    sum=sum+array[i];
    }
    average = sum/10;
    printf("The average is %.2f and sum is %d",average, sum);
}