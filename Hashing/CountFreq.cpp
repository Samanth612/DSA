#include <bits/stdc++.h>

using namespace std;

vector<int> countFreq(int n,int x,vector<int> &nums){
    vector <int> arr(n,0);
    for(int i=0;i<n;i++){
        if(nums[i] <= n){
            arr[nums[i]-1]+=1;
        }
    }
    return arr;
}

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for(auto &i:arr){
        cin >> i;
    }

    vector<int> res = countFreq(n, x, arr);

    for(auto i:res){
        cout << i << " ";
    }

    return 0;
}