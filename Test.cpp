#include <iostream>

using namespace std;

struct Test{
  int a;
  int b;
};

int main()
{
    struct Test *p,r;
    cout << sizeof(p) << " => p \n"; // Always takes 4 bytes it is based on platform
    cout<< sizeof(r) << " => r";

    return 0;
}