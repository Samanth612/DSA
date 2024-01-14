#include <bits/stdc++.h>

using namespace std;

//call by value => used when no change to the actual parameters
int sumoftwonumbers(int a,int b){
    return a + b;
}

//call by address => used when need to change the actual parameters
void swapbyaddress(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference => used when need to change the actual parameters, it works only in c++
void swapbyreference(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    int a, b;
    cin >> a >> b;
    cout << sumoftwonumbers(a, b)<<endl;

    int c = 10, d = 30;
    swapbyaddress(&c, &d);
    cout << c << " " << d<<endl;

    swapbyreference(c, d);
    cout << c << " " << d;

    return 0;
}