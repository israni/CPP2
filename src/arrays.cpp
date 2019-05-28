#include <iostream>
using namespace std;
int main()
{
    /* Arrays are defined using a data type for elements of the array and a size.
       They can also be defined by initializing them with elements.
       Both examples are shown below. 
       If we don't initialize the elements of an array, garbage values are returned.
    */

    int my_array[5];
    int my_array_2[5] = {1,2,3,4,5};
    int my_array_3[] = {1,2,3,4,5};

    // Print all elements of the declared array
    cout << "1. my_array[5]" << endl;
    cout << "   If we don't initialize the elements of an array, garbage values are returned." << endl;
    for (int i = 0;i<5; i++)
    {
        cout << "\t" << my_array[i] << " ";
    }
    // If size of array is unknown, it can be found using -
    cout << endl << "   size of array is: " << sizeof(my_array)/sizeof(my_array[0]);

    // Print all elements of the declared and initialized array with size specified
    cout << endl << endl << "2. my_array_2[5] = {1,2,3,4,5}" << endl;
    for (int i = 0;i<5; i++)
    {
        cout << "\t" << my_array_2[i] << " ";
    }

    // Print all elements of the declared and initialized array with size unspecified
    cout << endl << endl << "3. my_array_3[] = {1,2,3,4,5}" << endl;
    for (int i = 0;i<5; i++)
    {
        cout << "\t" << my_array_3[i] << " ";
    }


    cout << endl << endl << "4. Multidimensional Array" << endl;
    // Multidimensional arrays are similar to arrays.
    int multi_myarray[5][5] = { {1,2,3,4,5},
                                {1,2,3,4,5},
                                {1,2,3,4,5},
                                {1,2,3,4,5},
                                {1,2,3,4,5} };
    
    // Print multidimesnional array
    for (int i=0;i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << multi_myarray[i][j] << " ";
        }
        cout << endl;
    }
    return(0);
}