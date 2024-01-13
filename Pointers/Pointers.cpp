#include <bits/stdc++.h>

using namespace std;

//Pointers are used for accessing heap memory, Resources, parameter passing

int main(){
    
    int a=10; //data variable

    int *p; //Address vaiabels, pointers variables oocupies memeory

    p = &a;

    cout << p<<"\n"; // This gives address of a

    cout << *p; // This gives the value which is present inside a

    return 0;
}