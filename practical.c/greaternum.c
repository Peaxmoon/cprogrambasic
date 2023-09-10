#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    if(n1>n2){
        printf("The number %d is greater than %d",n1,n2);
    }
    else if(n2>n1){
        printf("The number %d is greater than %d",n2,n1);
    }
    else{
        printf("Both are equal.");
    }
    return 0;
}