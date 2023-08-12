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

    class treenode{
        public:
        int val;
        treenode *left,*right;
     treenode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
     }
    };
    int findfloorInBST(treenode *root,int key){
    int floor=-1;
    while(root){
        if(root->val==key){
            floor=root->val;
            return floor;
        }
        if(key>root->val){
            floor=root->val;
            root=root->right;
        }
        else{
            root= root->left;
        }
    }
    return floor;
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
treenode* NewRoot = NULL;
    treenode* root = new treenode(2);
    root->left = new treenode(7);
    root->right = new treenode(5);
    root->left->right = new treenode(8);
    root->left->right->left = new treenode(1);
    root->left->right->right = new treenode(11);
    root->right->right = new treenode(9);
    root->right->right->left = new treenode(4);
    cout<<" Ceil value of tree : "<<findfloorInBST(root,10);



    return 0;
}