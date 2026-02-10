#include <stdio.h>
int main()
{
    int n,i,sum=0,a[10];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}