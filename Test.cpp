#include <iostream>

using namespace std;

struct Test{
  int a;
  int b;
};

int main()
{
    struct Test *p,r;

    cout << sizeof(p) << " => p \n"; // Always takes 4 bytes it is based on platform, oniline gdb takes 8 bytes others 4 bytes
    
    cout<< sizeof(r) << " => r";

    int a = 10;

    int pointer;

    int *ptr;

    ptr = &a; //(pointer = &a;) inside bracket gives error as => a value of type "int *" cannot be assigned to an entity of type "int"

    return 0;
}