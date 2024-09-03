#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void zigZag(vector<int>& arr, int n){
    bool flag = true;
    for(int i = 0; i <= n-2; i++){
        if(flag){        
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        else{
            if(arr[i] < arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        flag = !flag;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Using vector instead of a fixed-size array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    zigZag(arr, n);  
    for(int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    return 0; 
}
