//	WAP to calculate the sum of numbers 1 to 100.
#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=1; i<=100; i++){
        sum = sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}