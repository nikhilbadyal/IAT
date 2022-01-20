enum color_n {BLACK, RED};
class RedBlack;
class Node{
    friend class RedBlack;
private:
    int info;
    Node * left;
    Node * right ;
    color_n color;
public:
    Node():info(0),left(nullptr),right(nullptr),color(BLACK){}

};
class RedBlack{
private:
    Node * root;

    Node* new_node(int value ){
        Node * new_ = new Node;
        new_->info = value;
        new_->left = nullptr;
        new_->right = nullptr;
        new_->color = BLACK;
        return new_;
    }
    void insert_(Node * root , int value){

    }
public:
    RedBlack():root(){}

    void insert(int value){
        insert_(root,value);
    }

};
