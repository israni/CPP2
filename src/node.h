class node{
    private:
        int data;
        struct node* left; // Pointer to left node
        struct node* right; // Pointer to right node
    public:
        node(int val);
        int get_data(); 
        void set_data(int val); 
        bool operator==(const node& other_node);  
};

node::node(int val){
    data = val;
    left = nullptr;
    right = nullptr;
}

int node::get_data(){
    return(data);
}

void node::set_data(int val){
    data = val;
}

bool node::operator==(const node &other_node){
    return other_node.data == data;
}
