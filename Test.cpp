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
    
    cout<< sizeof(r) << " => r"<<endl;

    int a = 10;

    int pointer;

    int *ptr;

    ptr = &a; //(pointer = &a;) inside bracket gives error as => a value of type "int *" cannot be assigned to an entity of type "int"

    int *ptr1,*ptr2;

    ptr1 = (int *)malloc(5*sizeof(int));// It allocates 20 bytes dynamically in heap

    ptr1[0] = 5;

    cout << ptr1[0] << endl;

    ptr2 = (int *)calloc(5,sizeof(int));// It allocates 20 bytes dynamically in heap

    ptr2[0] = 5;

    cout << sizeof(ptr2)<<endl;// Here it gives 4,0x11f1990

    ptr2 = (int *)realloc(ptr2, 10 * sizeof(int));// It allocates 40 bytes dynamically in heap

    ptr2[0] = 10;

    cout << sizeof(ptr2)<<endl; // Here it gives 4,0x11f1990

    //It gives sizeof(ptr2) as 4. since, any pointer occupies equal amount of memory i.e 4 bytes of memory

    free(ptr1);//free function deallocates memory in heap
    free(ptr2);

    cout << ptr1[0]<<" "<<sizeof(ptr1)<<" " << ptr2[0]<<" "<<sizeof(ptr2);

    return 0;
}