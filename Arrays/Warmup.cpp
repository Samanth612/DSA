#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    //Reading array elements
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    //Printing array elements
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}