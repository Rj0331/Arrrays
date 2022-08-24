#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {

        if (key == arr[mid])
        {

            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return 0;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int randArray[n];
    for (int i = 0; i < n; i++)
    {
        randArray[i] = rand() % 100;
    }
    print(randArray, n);
    sort(randArray,n);
    printf("After Sorting : ");
    print(randArray, n);
    int key = rand()% n;
    printf("The key is : %d \n", key);
    int ind = randArray[key];
    printf(" The element is : %d", ind);
   int res =  BinarySearch(randArray,n,ind);
   if (res == -1){
    printf("Element not found");
   }
   else{
    printf(" \n Element found at index : %d", key);
   }
}
