#include <bits/stdc++.h>

using namespace std;

//Best Example Rectangle

struct Rectangle
{
    int length; // => 4 bytes
    int breadth; // => 4 bytes
};


int main(){

    struct Rectangle rect = {10, 5}; // => Decl + Init

    cout << rect.length << "\n"
         << rect.breadth << endl;

    struct Rectangle r; // => Declaration, total = 8 bytes

    r.length = 15; // . operator used to access the members of a structure
    r.breadth = 10;

    cout << "Area of a rectangle is: " << r.length * r.breadth;

    return 0;
}