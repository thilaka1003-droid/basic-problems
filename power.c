#include <stdio.h>
#include <math.h>
int exponent(int a,int n);
int main() {
    int a,n,res;
    printf("Enter number of terms");
    scanf("%d %d",&n,&a);
    res=exponent(a,n);
    printf("%d",res);
    // Write C code here
   
    return 0;
}
int exponent(int  a,int n)
{

    if (n==0)
    return 1;
    else
    {
        return a*exponent(a,n-1);
        
    }
}
