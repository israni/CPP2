#include <iostream>
using namespace std;

// Recursion is when a function calls itself.
// Base case is the condition which stops the recursion from happening.

int factorial(int n)
{
    if(n==1)
    {
        return (n);
    }
    else
    {
        return (n*factorial(n-1));
    }
    
}

int main()
{
    cout << "5! = " << factorial(5) << endl;
    return(0);
}