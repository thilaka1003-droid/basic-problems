#include <stdio.h>
int main()
{
    int a[50],i,n,sort=1;
    printf("Enter number of array elements");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            sort=0;
            break;
        }
    }
    if(sort)
    printf("Array sorted");
    else
    printf("not sorted");
    return 0;



}