#include<iostream>
using namespace std;

int uniqueNumber (int arr[], int n){
    int ans = 0;
    for (int i=0; i<n;i++){
        ans = ans ^ arr[i];

    }
    return ans;

    
}

int  main(){
    int arr[100]={1,2,4,2,76,4,1};
    for (int i=0;i<arr[i];i++){
        uniqueNumber(arr,7);
    }
    cout <<uniqueNumber(arr,7) << endl;
   return 0;
    

}
