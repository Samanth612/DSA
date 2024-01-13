#include <bits/stdc++.h>

using namespace std;

//Pointer variable always takes 4 bytes

struct Rectangle
{
    int length;
    int breadth;
};


int main(){

    struct Rectangle r = {10, 5};

    struct Rectangle *p = &r; // Pointer Initialization and declaration

    cout << r.length << "\n"
         << r.breadth << "\n";

    cout << p->length << "\n"
         <<p->breadth << "\n";

    //struct Rectangle *ptr; // Dynamically allocate memory in heap using pointer in c

    Rectangle *ptr; // Dynamically allocate memory in heap using pointer in c++

   // ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // Dynamic memory allocation in c
    ptr = new Rectangle;// Dynamic memory allocaton in c++

    ptr->length = 10;
    ptr->breadth = 20;

    cout << ptr->length<<"\n"<<ptr->breadth;

    return 0;
}