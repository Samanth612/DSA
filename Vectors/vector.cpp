#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(5);

    //Below is the forEach loop
    for (auto &x:v){
        cin >> x;
    }
    for (auto &x:v){
        cout << x<<" ";
    }
    cout << "\n" << v[0]<<" => Element at index 0\n";
    cout << v.size()<<" => Size of vector\n";
    cout << v.at(0)<<"\n";
    sort(v.begin(),v.end());
    for (auto &x:v){
        cout << x<<" ";
    }
    return 0;
}