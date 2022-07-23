#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<  a[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    int arr[6] = {0, 4, 56, 32, 44, 5};
    int brr[5] = {7, 88, 54, 2, 3};

    reverse(arr, 6);

    reverse(brr, 5);

    printArray(arr, 6); 

    printArray(brr, 5);
    return 0;
}
