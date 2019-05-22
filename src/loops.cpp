#include <iostream>
using namespace std;
int main()
{
    cout << "This file demonstrates the use of conditions/loops/switch case in C++" << endl;
    cout << "The loops covered include-" << endl;
    cout << "1. If/else" << endl;
    cout << "2. Switch case" << endl;
    cout << "3. For loop" << endl;
    cout << "4. While" << endl;
    cout << "5. Do While" << endl;
    cout << endl;
    

    // If/else
    cout << "If/else: ";
    int a = 10;
    if (a < 20)
    {
        cout << "a is less than 20" << endl;
    }
    else
    {
        cout << "a is greater than or equal to 20" << endl;
    }
    
    // Switch case
    cout << "Switch case: ";
    int age = 25;
    switch (age)
    {
        case(25):
            cout << "Age is 25." << endl;
            break;
        case(42):
            cout << "Age is 42." << endl;
            break;
        case(60):
            cout << "Age is 60." << endl;
            break;
        default:
            cout << "Age is not one of the required ages." << endl;
    }




    return(0);
}