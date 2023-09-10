//	WAP to check whether a number is a palindrome number.
#include <stdio.h>
int main()
{
    int num, digit, count = 0, check;
    printf("Enter a number : ");
    scanf("%d", &num);
    check = num;
    while(num > 0)
    {
        digit = num % 10;
        count = count * 10 + digit;
        num = num / 10;
    }
    printf("%d is the reverse digit.\n", count);
    if(check==count){
        printf("palindrome.");
    }
    else{
        printf("not palindrome.");
    }
    return 0;
}