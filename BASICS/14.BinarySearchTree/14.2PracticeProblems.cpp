#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Ceil in a Binary Search Tree

// class node {
//     public:
//     int data;
//     node *left,*right;
//     node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;

//     }
// };
// int findceil(node *root , int key)
// {
//   int ceil =-1;
//   while(root){
//     if(root->data==key){
//         ceil=root->data;
//         return ceil;
//     }
//     if(key>root->data){
//         root=root->right;
//     }
//     else{
//         ceil=root->data;
//         root=root->left;
//     }
//   }
//   return ceil;
// }


// Floor in a Binary Search Tree

    // class treenode{
    //     public:
    //     int val;
    //     treenode *left,*right;
    //  treenode(int val){
    //     this->val=val;
    //     this->left=NULL;
    //     this->right=NULL;
    //  }
    // };
    // int findfloorInBST(treenode *root,int key){
    // int floor=-1;
    // while(root){
    //     if(root->val==key){
    //         floor=root->val;
    //         return floor;
    //     }
    //     if(key>root->val){
    //         floor=root->val;
    //         root=root->right;
    //     }
    //     else{
    //         root= root->left;
    //     }
    // }
    // return floor;
    // }

// Insert Into A Binary Search Tree
class Node {
    public:
    int val;
    Node *left,*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
// class solution{
//     public:

// node *insert(node * root,int val){
//      if(root==NULL) return new node(val);
//      node * cur=root;
//      while(true){
//         if(cur->val<=val){
//             if(cur->right!=NULL ) cur=cur->right;
        
//         else{
//             cur->right=new node(val);
//             break;
//         }

//      }
//      else{
//         if(cur->left!=NULL) cur=cur->left;
//         else{
//             cur->left=new node(val);
//         }
//      }}
// return root;
// }
// };


// void Inorder(node* root)
// {
//     if (root == NULL)
//         return;
//     else {
//         Inorder(root->left);
//         cout << root->val << " ";
//         Inorder(root->right);
//     }
// }

void insert(Node*& root, int key)
{
    Node* node = new Node(key);
    if (!root) {
        root = node;
        return;
    }
    Node* prev = NULL;
    Node* temp = root;
    while (temp) {
        if (temp->val > key) {
            prev = temp;
            temp = temp->left;
        }
        else if (temp->val < key) {
            prev = temp;
            temp = temp->right;
        }
    }
    if (prev->val > key)
        prev->left = node;
    else
        prev->right = node;
}
 
void inorder(Node* root)
{
    // Node* temp = root;
    // stack<Node*> st;
    // while (temp != NULL || !st.empty()) {
    //     if (temp != NULL) {
    //         st.push(temp);
    //         temp = temp->left;
    //     }
    //     else {
    //         temp = st.top();
    //         st.pop();
    //         cout << temp->val << " ";
    //         temp = temp->right;
    //     }
    // }
    if (root == NULL)
        return;
    else {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// Ceil in a Binary Search Tree

// node* NewRoot = NULL;
//     node* root = new node(2);
//     root->left = new node(7);
//     root->right = new node(5);
//     root->left->right = new node(6);
//     root->left->right->left = new node(1);
//     root->left->right->right = new node(11);
//     root->right->right = new node(9);
//     root->right->right->left = new node(4);
//     cout<<" Ceil value of tree : "<<findceil(root,6);


// 	Floor in a Binary Search Tree
// treenode* NewRoot = NULL;
//     treenode* root = new treenode(2);
//     root->left = new treenode(7);
//     root->right = new treenode(5);
//     root->left->right = new treenode(8);
//     root->left->right->left = new treenode(1);
//     root->left->right->right = new treenode(11);
//     root->right->right = new treenode(9);
//     root->right->right->left = new treenode(4);
//     cout<<" Ceil value of tree : "<<findfloorInBST(root,10);

// Insert Into A Binary Search Tree
Node* root = NULL;

     insert(root,50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 cout<<"Insert data in the BST :->"<<endl;
    // Print inorder traversal of the BST
    inorder(root);
    return 0;
}