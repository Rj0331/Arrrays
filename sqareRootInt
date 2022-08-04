#include <iostream>
using namespace std;

int sqrtInt(int n)
{
    // use long long int for more precision.
    int s = 0;
    int e = n;

    int mid = s + (e - s) / 2;

    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int number;
    cout << " Enter the number : " << endl;
    cin >> number;
    cout << "The square root of the number is: " << sqrtInt(number) << endl;
}
