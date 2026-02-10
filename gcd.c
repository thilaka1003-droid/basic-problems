#include <stdio.h>
int GCD(int m,int n);
int main() {
    int m,n,result;
    printf("ENter m and n values");
    scanf("%d %d",&m,&n);
    result=GCD(m,n);
    printf("gcd value is %d",result);
    return 0;
    // Write C code here
   

}
int GCD(int m,int n )
{
    if(n==0)
    return m;
    else{
        return GCD(n, m % n);
    }
}