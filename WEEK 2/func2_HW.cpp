#include <iostream>
using namespace std;
int area_circle(int radius)
{
    return 3.14 * radius * radius;
}
int even_odd(int number)
{
    if (number % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}
int factorial(int number)
{
    int ans = 1;
    for (int i = 1; i < number; i++)
    {
        ans *= i;
    }
    return ans;
}
// int prime(int number)
// {
//     // check number is prime
// }
// int prime(int number)
// {
//     // print all prime numbers form 1 to N
// }

int main()
{
    int radius = 5, number = 10;
    cout << area_circle(radius) << endl;
    // even_odd(number);
    cout << endl;
    cout << factorial(number) << endl;

}

/*
this is CLASS WORK
Print all digits in an integer
create a number using digits 
print number of set bits 
print binary equivalent of a decimal number
convert  distance in KM to Miles
*/
/*
this is HOME WORK 
reverse an integer 
set its bits
convert  celcius to fahrenheit
*/