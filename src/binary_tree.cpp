#include<iostream>
#include"node.h"

int main()
{
    node mynode1(10);
    node mynode2(20);
    std::cout << mynode1.get_data() << "," << mynode2.get_data() << std::endl;
    if (mynode1==mynode2){
        std::cout << "EQUAL" << std::endl;
    }
    else{
        std::cout << "NOT EQUAL" << std::endl;    
    }
    // std::cout << mynode1 == mynode2 << std::endl;
    std::cout << "Done" << std::endl;
}