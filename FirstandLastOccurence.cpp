#include <iostream>
using namespace std;
int FirstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (key == arr[mid])
        {
            ans = mid;
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
    return ans;
}

int LastOcc(int arr[], int n, int key) // End ke jagah start to mid + 1 karna hai .//
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1; // End ke jagah start to mid + 1 karna hai .//
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
    return ans;
}
int main()
{
    int even[6] = {2, 3, 4, 5, 4, 6};

    cout << " The First Occurence is at Index : " << FirstOcc(even, 6, 4) << endl;

    cout << " The Last Occurence is at Index : " << LastOcc(even, 6, 4) << endl;

    return 0;
}
