#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int brr[n];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        brr[i] = arr[n-1-i];
    }
    for(int i=0; i<n; i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}