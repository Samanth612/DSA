#include <bits/stdc++.h>

using namespace std;

int * fun(int n){
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main(){

    int *p;
    p = fun(5);
    cout << p;
    return 0;
}