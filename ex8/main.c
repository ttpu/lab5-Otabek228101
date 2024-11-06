#include <stdio.h>
#include <stdbool.h>

int main() {
    int n,i,max,indx,max2;

    printf("n: ");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("number: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i==0)
        {
            max=arr[i];
        }
        if (arr[i] > max)
        {
            max=arr[i];
            indx=i;
        }
        
    }
    for (i = 0; i < n; i++)
    {
        if (i==0)
        {
            max2=arr[i];
        }
        if (i==indx)
        {
            continue;
        }
        
        if (arr[i] > max2)
        {
            max2=arr[i];
        }
        
    }
    printf("max: %d\n", max);
    printf("max2: %d\n", max2);
}