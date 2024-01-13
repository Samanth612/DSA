#include <bits/stdc++.h>

using namespace std;

//Pointer variable always takes 4 bytes

//Pointers are used for accessing heap memory, Resources, parameter passing

int main(){
    
    int a=10; //data variable

    int *p; //Address vaiabels, pointers variables oocupies memeory

    p = &a;

    cout << p<<"\n"; // This gives address of a

    cout << *p << endl; // This gives the value which is present inside a

    int *arr;

    arr = (int *)malloc(5 * sizeof(int)); // This is the syntax to access heap memory in c

    cout << arr<<endl;

    arr = new int[5]; // This the syntax to access heap memory in c++

    cout << arr;

    return 0;
}