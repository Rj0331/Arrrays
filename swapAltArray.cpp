#include <iostream>
using namespace std;

void  swapAlt(int a[], int n)
{
    //Using for Loop Swapping
    for (int i = 0; i <= n; i+=2){
        if (i+1 < n)
        {
            swap(a[i],a[i+1]);
        }
        
    }
    //Using while loop Swapping
    // int start = 1;
    // int end = n -2 ;
    // while (start <= end)
    // {
    //     swap(a[start], a[end]);
    //     start+=2;
    //     end-=2;
    // }
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

    swapAlt(arr, 6);

     swapAlt(brr, 5);

    printArray(arr, 6); 

    printArray(brr, 5);
    return 0;
}
