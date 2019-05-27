#include<iostream>
using namespace std;

struct Vector3
{
    int x,y,z;
};

int main()
{
    // C++ programs have two types of memory which we care about. Stack and heap!
    // When a program runs, stack and heap memory is allocated on the RAM by the OS.
    // Stack memory is usually predefined, usually 2MB. 
    // Heap - predefined also, but can grow. Ask OS for more. Expensive.
    // While allocating memory for a variable within the stack, we move the stack pointer
    //      by the size of the variable in bytes. The variables in the stack are defined 
    //      close/on top of each other. [Hence stack]  Extremely fast!
    // Memory in heap is allocated randomly. [Not necessarily close together].
    // Memory in heap is allocated using the 'new' keyword or by using smart pointers.
    // Memory in heap needs to be deleted otherwise, leads to memory leaks.
    // Stack memory is freed as soon as the scope of the stack frame ends.

    // Stack allocation
    int a = 5;
    int array_a[5] = {1,2,3,4,5};
    Vector3 v;

    // Heap allocation
    // Even though the actual memory is allocated in the heap, the pointers 
    //       to them are allocated in the stack.
    int *b = new int;
    *b = 5;
    int *array_b = new int[5];
    array_b[0] = 1;
    array_b[1] = 2;
    array_b[2] = 3;
    array_b[3] = 4;
    array_b[4] = 5;
    Vector3 *hvector = new Vector3;
    
    delete b;
    delete [] array_b;
    delete hvector;

    return(0);
}