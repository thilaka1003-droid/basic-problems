#include <stdio.h>
int main()
{
    int a[50], n,key,i;
    printf("Enter numbers of elements");
    scanf("%d",&n);
    printf("Enter array elements");
    

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Key element found at the position %d",a[i]);
            break;
        }
        else
        printf("not found");
    }

}