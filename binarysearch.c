#include <stdio.h>
int main()
{
    int n, i,mid,low,high,key,a[10];
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("ENter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    printf("Enter key element");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+mid)/2;

    }
    if(a[i]==mid)
    {
        printf("key element found at position",mid);
    }
    else if(a[mid]>key)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    
        
        
        
    }
    

