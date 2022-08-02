#include <iostream>
using namespace std;

int moutainPeak( int arr[], int n){
    int s = 0 ;
    int e = n -1 ;
    
    int mid = s + (e-s)/2;

    while ( s < e){
        if ( arr[mid] < arr[mid +1]){
            s = mid +1;
    
        }
        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[] = {2,4,8,7,5};
    int peak = moutainPeak(arr,5);
    cout << " The peak is " << peak << endl;
    return 0;
}
