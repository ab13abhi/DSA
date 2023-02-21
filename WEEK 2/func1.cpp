#include <iostream>
using namespace std;
int add(int a, int b)
{
    // this is a pass by value, passing a copy
    return a + b;
    return 0;
}
int multiply(int *a, int *b)
{
    // this is pass by refference, passing the address
    return (*a) * (*b);
}
int main()
{
    int a = 10, b = 15;
    cout << add(a, b) << endl;
    cout << multiply(&a, &b) << endl;
    return 0;
}
/*
Stack is a type of data structure LIFO
Function call stack is created while calling functions.
The return 0 is returning 0 to operating system.
 _______
|_______|
|_______|
|_______|
|_______|
|_______|
|_______|

*/
