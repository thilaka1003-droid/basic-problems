#include <stdio.h>

int main() {
    int n,i,largest,second,a[100];
    printf("Enter number of elements");
    scanf("%d",&n);
    if (n < 2) {
        printf("Second largest element not possible.\n");
        return 0;
    }
    printf("ENter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    second=largest=-1;
    for(i=0;i<n;i++)
    if(a[i]>largest){
        second=largest;
        largest=a[i];
     }
     else if(a[i]>second && a[i]!=largest){
         second=a[i];
     }
     if(second==-1){
         printf("not found");
     }
     else
     {
         printf("second largest element is %d",second);
     }



    return 0;
}