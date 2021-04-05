#include <iostream>

template <class T>
class node{
    private:
        T data;
        node* left; // Pointer to left node
        node* right; // Pointer to right node
    public:
        // node();
        node<T>(T val);
        // ~node();
        T get_data(); 
        void set_data(T val); 
        bool operator==(const node& other_node); 
        // Friend functions are not member functions but can access the private and public members of the class.
        template <typename U> 
        friend std::ostream& operator<<(std::ostream& os, const node<U>& n);
};

// Constructor for node class
template <class T>
node<T>::node(T val){
    data = val;
    left = nullptr;
    right = nullptr;
}

// Getter function
template <class T>
T node<T>::get_data(){
    return(data);
}

// Setter function
template <class T>
void node<T>::set_data(T val){
    data = val;
}

// Overloaded comparison operator to compare two nodes
template <class T>
bool node<T>::operator==(const node<T> &other_node){
    return other_node.data == data;
}

// Overloaded print operator to print the value of node to ostream
template <class T>
std::ostream& operator<<(std::ostream& os, const node<T>& n)
{
    os << n.data;
    return os;
}