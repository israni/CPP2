#include <iostream>

class node{
    private:
        int data;
        node* left; // Pointer to left node
        node* right; // Pointer to right node
    public:
        // node();
        node(int val);
        // ~node();
        int get_data(); 
        void set_data(int val); 
        bool operator==(const node& other_node); 
        // Friend functions are not member functions but can access the private and public members of the class. 
        friend std::ostream& operator<<(std::ostream& os, const node& n);
};

// Constructor for node class
node::node(int val){
    data = val;
    left = nullptr;
    right = nullptr;
}

// Getter function
int node::get_data(){
    return(data);
}

// Setter function
void node::set_data(int val){
    data = val;
}

// Overloaded comparison operator to compare two nodes
bool node::operator==(const node &other_node){
    return other_node.data == data;
}

// Overloaded print operator to print the value of node to ostream
std::ostream& operator<<(std::ostream& os, const node& n)
{
    os << n.data;
    return os;
}