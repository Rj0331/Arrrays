#include <iostream>
using namespace std;

int getMin(int ar[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    return min;
}
int getMax(int ar[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    return max;
}
int main()
{
    cout << "Enter the Limit : "<< endl;

    int size;
    cin >> size;
    cout << "Enter the Values : "<< endl;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << " Maximum Value is : " << getMax(arr, size) << endl;
    cout << " Minimum Value is : " << getMin(arr, size) << endl;
}
