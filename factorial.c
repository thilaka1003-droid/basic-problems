#include <stdio.h>
int factorial(int n);
int main() {
    int n,f;
    printf("Enter number");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of number is %d",f);
    return 0;
    
}
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}