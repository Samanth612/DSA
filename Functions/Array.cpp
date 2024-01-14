#include <bits/stdc++.h>

using namespace std;

int * fun(int n){
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int * fun1(int n){
    int *p;
    p = new int[n];
    for (int i = 0; i < n;i++){
        p[i] = i + 1;
    }
    return p;
}

void fun2(int *arr,int n){
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int *p;
    p = fun(5);
    cout << p<<endl;
    p = fun1(5);
    for (int i = 0; i < 5;i++)
    {
        cout << p[i]<<" ";
    }
    
    cout << endl;

    int arr[] = {10, 20, 30, 40, 50};

    fun2(arr,5);

    return 0;
}