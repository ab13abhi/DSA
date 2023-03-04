#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int *ptr = &a;
    // cout << a << endl;
    // cout << &a << endl;
    // // using derefrence operator
    // cout << (*ptr) << endl;
    // cout << ptr << endl;

    /*sizeof(pointer)*/
    // int b = 5;
    // int *b_ptr = &b;
    // cout << sizeof(*b_ptr) << endl;
    // cout << sizeof(b_ptr) << endl;

    // char c = 'a';
    // char *c_ptr = &c;
    // cout << sizeof(*c_ptr) << endl;
    // cout << sizeof(c_ptr) << endl;

    // double d = 3423.3242;
    // double *d_ptr = &d;
    // cout << sizeof(*d_ptr) << endl;
    // cout << sizeof(d_ptr) << endl;

    // // Declaring a null pointer 
    // int *ptr = nullptr;
    // int *ptr = 0;

    // Declaring a pointer to pointer 
    int abc = 10;
    int *ptr = &abc;
    int *ptr2 = ptr;
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    
    return 0;
}