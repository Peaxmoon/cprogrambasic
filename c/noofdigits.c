//	WAP to count the no of digits of a number using goto statement
#include <stdio.h>
int main()
{
    long long num, digit, count = 0;
    printf("Enter a number : ");
    scanf("%lld",&num);
top:
    digit = num % 10;
    count++;
    num = num / 10;
    if (num > 0)
    {
        goto top;
    }
    printf("%lld is the no of digits.",count);
    return 0;
}