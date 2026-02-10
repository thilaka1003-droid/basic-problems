#include <stdio.h>
int main()
{
    int n,i,max,a[10];
    printf("Enter number of  array elements");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]>max)
        max=a[i];
    }
    printf("maximum element %d",max);

}