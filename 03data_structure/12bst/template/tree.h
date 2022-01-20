class Tree;
class Node{
    friend class Tree;
private:
    int info;
    Node * left;
    Node * right;
    Node * parent;
public:
    Node():info(0),left(nullptr),right(nullptr){}

};

class Tree{
private:
    Node * nil;
    Node * create_node(int value = -1){
        Node * new_ = new Node;
        new_->info = value;
        new_->left = nullptr;
        new_->right = nullptr;
        new_->parent = nullptr;
        return new_;
    }
    void insert_(Node * nil , int value){
        Node * node = nil->right                   ;
        if(node->info > value){
            while(node != nullptr){
                node = node->left;
            }
            node = create_node(value);
            node->left = this->nil;
            node->right = this->nil;
        }else{
            while(node != nullptr){
                node = node->right;
            }
            node = create_node(value);
            node->left = this->nil;
            node->right = this->nil;
        }
    }
    int count = 0 ;
    void print_(Node *root){
        while(root != this->nil && count <5){
            count++;
            print_(root->left);
            cout<<root->info<<"  ";
            print_(root->right);
        }
    }
public:
    Tree(){
        nil = create_node();
        nil->right = nil;
        nil->left = nullptr;
        nil->parent = nullptr;
    }
    void insert(int value){
        if(nil->right ==  nil){
            nil->right = create_node(value);
            nil->right->left = this->nil;
            nil->right->right = this->nil;
        }else{
            insert_(nil,value);
        }
    }
    void print(){
        if(nil->right!= nil){
            print_(nil->right);
        }
    }
    void check(){
        cout<<nil->right->right->info;
        cout<<nil->right->left->info;
    }
};
