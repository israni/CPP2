#include <iostream>
using namespace std;

// Function overloading is when we have the same function name but different input parameters.

int sum(int a, int b);
float sum(float a, float b);
//double sum(float a,float b);
// The commented code will not work as this has the same input parameters and only different return 
// type as "float sum(float a, float b);"

int main()
{
    cout << sum(1,2) << endl;
    cout << sum((float)1.6,(float)2.1) << endl; 
    return(0);
}

int sum(int a, int b)
    {return(a+b);}

float sum(float a, float b)
    {return(a+b);}
