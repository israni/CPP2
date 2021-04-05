#include<iostream>
#include"node.h"

int main()
{
    node<int> mynode1(10);
    node<int> mynode2 (20);
    std::cout << mynode1.get_data() << "," << mynode2.get_data() << std::endl;
    if (mynode1==mynode2){
        std::cout << "EQUAL" << std::endl;
    }
    else{
        std::cout << "NOT EQUAL" << std::endl;    
    }
    std::cout << "mynode1: " << mynode1 << std::endl;
    
    // The data attribute is deep copied as it is defined in the stack at compile time.
    node<int> mynode3(30);
    std::cout << "mynode3: " << mynode3 << std::endl;

    mynode3 = mynode1;
    std::cout << "mynode3: " << mynode3 << std::endl;

    mynode3.set_data(50);
    std::cout << "mynode3: " << mynode3 << std::endl;
    std::cout << "mynode1: " << mynode1 << std::endl;

    // Need to show that the pointers left, right would not be deep copied as they would be defined in the heap.

    std::cout << "Done" << std::endl;

}