// Wap to find an element using binary search using iterative
#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int key;
    printf("Enter the element to be searched : ");
    scanf("%d", &key);
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {2, 34, 65, 43, 12, 45, 78, 64, 66, 31};
    printArray(arr, 10);
    printf("After Sorting :\n");
    sort(arr, 10);
    printArray(arr, 10);
    int result = binarySearch(arr,10);
    if (result == -1){
        printf(" Element not found. ");
    }
    else{
        printf(" Found at position %d", result);
    }

    return 0;
}
