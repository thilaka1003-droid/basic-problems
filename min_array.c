#include <stdio.h>
int main()
{
    int n,i,min,a[10];
    printf("Enter number of  array elements");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]<min)
        min=a[i];
    }
    printf("maximum element %d",min);

}