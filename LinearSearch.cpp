//Linear Search
#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }return 0;
}

int main()
{
    cout << " Enter the length: " << endl;
    int n;
    cin >> n;

    
    
    cout << "Enter the Values : "<< endl;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << " Enter the key : " << endl;
    int key;
    cin >> key;

    int found = search(arr, n, key);
    if (found)
    {
        cout << " Key Found " << endl;
    }
    else
    {
        cout << " Key is not found" << endl;
    }
    return 0;
}
