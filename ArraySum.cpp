#include <iostream>
using namespace std;

int getSum(int a[], int n)
{

    int b = 0;
    for (int i = 0; i < n; i++)
    {

        b += a[i];
    }
    return b;
}

int main()
{
    int arr[100];
    cout << "Enter the limit " << endl;

    int size;
    cin >> size;

    cout << "Enter the values to be added : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
        getSum(arr, size);
    }
    cout<< " The sum of the array is : "<< getSum(arr, size) << endl;

    return 0;
}
