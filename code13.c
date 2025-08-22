#include <stdio.h>
int removeDuplicates(int arr[], int n) 
{
    int i, j, k;
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                
                for (k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;   
                j--;   
            }
        }
    }
    return n;  
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) 
    {
printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
return 0;
}