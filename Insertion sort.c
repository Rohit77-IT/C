#include <stdio.h>
int main()
{
    int n,i,j,key,order;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 1 for Ascending , 2 for Descending: ");
    scanf("%d",&order);
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && ((order==1 && arr[j]>key) || (order==2 && arr[j]<key)))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Sorted numbers: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}