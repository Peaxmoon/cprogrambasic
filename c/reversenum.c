//	WAP to reverse a number.
#include <stdio.h>
int main()
{
    int num, digit, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num > 0)
    {
        digit = num % 10;
        count = count * 10 + digit;
        num = num / 10;
    }
    printf("%d is the no of digits.", count);
    return 0;
}