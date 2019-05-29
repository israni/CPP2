#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Functions can be declared and defined at the same time or separately.
// A function needs to be declared before it is called.
// Values passed to the function are treated as function variables whose scope ends with the function.

// function declaration
int mul_func(int a, int b);
int sum_func(int a = 0, int b = 0, int c = 0)
{
    return (a+b+c);
}

int main()
{
    // calling of functions
    cout << "sum of a,b,c is: " << sum_func(2,3,4) << endl;
    cout << "product of a,b is: " << mul_func(2,3) << endl;
    return(0);
}

// function definition
int mul_func(int a = 0, int b = 0)
{
    return(a*b);
}