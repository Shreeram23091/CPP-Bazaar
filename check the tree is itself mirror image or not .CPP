// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<vector>
#include<map>

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val):data(val),left(nullptr),right(nullptr){}
};

class solution{
    private:
    bool isSymmetricUntil(Node *root1,Node *root2){
        if(!root1||!root2)
        return root1==root2;
        return ((root1->data==root2->data)&&(isSymmetricUntil(root1->left,root2->right))&&(isSymmetricUntil(root1->right,root2->left)));
    }
    public:
    bool isSymmetric(Node *root){
        if(!root)
        return true;
        return isSymmetricUntil(root->left,root->right);
    }
    void printInorder(Node *root){
        if(!root)
        return;
        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);
    }
   
};

int main() {
    
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(2);
    root->left->left=new Node(3);
    root->right->right=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(4);
    
    solution solution;
    cout<<"Inorder Traversal :"<<endl;
   solution. printInorder(root);
    cout<<endl;
    bool res=solution.isSymmetric(root);
    if(res)
    cout<<"symmetric";
    else
    cout<<"Not symmetric";

    return 0;
}
