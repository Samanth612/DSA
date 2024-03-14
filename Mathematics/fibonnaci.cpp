#include <bits/stdc++.h>

using namespace std;

vector<int> fib(int n){
    vector<int> res;
    int prev = 0;
    int next = 1;
    res.push_back(prev);
    res.push_back(next);
    for (int i = 2; i <= n;i++){
        int addprev = prev + next;
        res.push_back(addprev);
        prev = next;
        next = addprev;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<int> res = fib(n);
    for(auto i:res){
        cout << i << " ";
    }
    return 0;
}