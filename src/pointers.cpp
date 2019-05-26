#include <iostream>
using namespace std;
int main()
{

    // Pointer declarations
    int *ip;      // pointer to an integer
    double *dp;   // pointer to a double
    float *fp;    // pointer to a float
    char *ch;     // pointer to a character

    // Variable declarations
    int a = 5;
    double d = 2.1;
    float f = 3.05;
    char c = 'c';

    cout << a << " " << d << " " << f << " " << c << endl;

    // Address of variables can be obtained using '&' or 'Address-of' operator
    cout << &a << " " << &d << " " << &f << " " << &c << endl;

    // Assign address of each of these variables as the value for each pointer
    ip = &a;
    dp = &d;
    fp = &f;
    ch = &c;

    cout << ip << " " << dp << " " << fp << " " << ch << endl;

    // Value at a given pointer location can be obtained using the '*' or 'dereference' operator
    cout << *ip << " " << *dp << " " << *fp << " " << *ch << endl;


    return(0);
}