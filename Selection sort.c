#include <stdio.h>
int main()
{
    int n, i, j, x, temp, order;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 for Ascending , 2 for Descending: ");
    scanf("%d", &order);
    for(i = 0; i < n - 1; i++)
    {
        x = i;
        for(j = i + 1; j < n; j++)
        {
            if((order == 1 && arr[j] < arr[x]) || (order == 2 && arr[j] > arr[x]))
            {
                x = j;
            }
        }
        if(x != i)
        {
            temp = arr[x];
            arr[x] = arr[i];
            arr[i] = temp;
        }
    }

    printf("Sorted numbers: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}