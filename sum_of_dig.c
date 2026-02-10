#include <stdio.h>

int main() {
    int n,dig,i,sum=0;
    printf("Enter digit ");
    scanf("%d",&n);
    do{
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }while(n>0);
    printf("sum of digits %d",sum);
    // Write C code here
   
    return 0;
}