/*
int a = 5;
int* p : pointer to interger
int** p : pointer to pointer
*/

#include <iostream>
using namespace std;

int* solve(){
    int a = 5;
    int *ans = &a;
    return ans;
}
int main()
{

    // int a = 5;
    // cout << a <<endl;

    // int *p = &a;
    // cout << "Address of Pointer 1: "<< p << endl;
    // cout << "Value Stored at *p is: " << *p << endl;

    // int **q = &p;
    // cout << "Address of Pointer 2: "<< q << endl;
    // cout << "Address of Pointer 1 Stored in Pointer 2: "<< *q << endl;
    // cout << "Value Stored at **q is: " << **q << endl;

    /*REFERENCE VARIABLE
    you cannot set a refrence variable to null;
    also readability is good as compared to pointers;


    
    */
    // int a = 5;
    // int &b = a;

    // cout << a << endl;
    // cout << b << endl;
    
    // b++;
    // cout << a << endl;
    // cout << b << endl;

    // MOST IMPORTANT QUESTION 
    cout << solve();


    return 0;
}