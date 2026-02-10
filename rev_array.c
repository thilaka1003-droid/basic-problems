#include <stdio.h>
int main()
{
    int a[5],n,i,rev[5];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Ente array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        rev[i]=a[n-1-i];
    }
    for(i=0;i<n;i++)
    {
    printf("%d",rev[i]);
    }
}