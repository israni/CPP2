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
    
    // If/else
    cout << endl << "If/else: ";
    cout << "Checks condition, executes moves forward. " << endl;

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
    cout << endl << "Switch case: ";
    cout << "Helps you avoid using multiple if else logics and write cleaner code. " << endl;

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

    // For loop
    cout << endl << "For loop: " << endl;
    cout << "Executes code block for a given number of times. " << endl;

    for (int i=0; i < 5; i++)
    {
        cout << i << endl;
    }

    // While loop
    cout << endl << "While loop: " << endl;
    cout << "Executes code block until condition is satisified. " << endl;
    int x = 0;
    while(x<5)
    {
        cout << x << endl;
        x++;
    }

    // Do While
    cout << endl << "Do While loop: " << endl;
    cout << "Will execute atleast once. " << endl;
    cout << "Checks condition in the end. " << endl;

    int y = 0;
    do 
    {
        cout << y << endl;
        y++;
    }while(y<5);

    return(0);
}