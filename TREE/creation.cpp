#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildTree(Node* root){

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data left to the root "<<data<<endl;

    root->left=buildTree(root->left);

    cout<<"Enter the data right to the root "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = NULL;

    // creating a tree

    root=buildTree(root);

    // levelorder traversal

    levelorder(root);
    cout<<endl;
    // inorder traversal
    inorder(root);
    cout<<endl;
    // preorder traversal
    preorder(root);
    cout<<endl;
    // postorder traversal
    postorder(root);
}