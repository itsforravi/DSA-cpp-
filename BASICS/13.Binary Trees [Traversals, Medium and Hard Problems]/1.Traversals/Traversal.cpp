#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Preorde Traversal In BT
// struct node
// {
//     int data;
//     struct node * left,* right;
// };


// void preodertra(node * curr , vector<int> &preorder){
//     if(curr==NULL){ 
//         return;
//     }
//     preorder.push_back(curr -> data);
//     preodertra(curr -> left,preorder);
//     preodertra(curr -> right,preorder);
// }
// struct node * newNode(int data){
//     struct node * node=(struct node *)malloc(sizeof(struct node));
//     node -> data=data;
//     node -> left=NULL;
//     node -> right=NULL;

//     return (node);

// }

// Inorde Traversal In BT
struct node
{
    int data;
    struct node * left,* right;
};


void Inordertra(node * curr , vector<int> &Inorder){
    if(curr==NULL){ 
        return;
    }

    Inordertra(curr -> left,Inorder);

    Inorder.push_back(curr -> data);
    
    Inordertra(curr -> right,Inorder);
}

struct node * newNode(int data){
    struct node * node=(struct node *)malloc(sizeof(struct node));
    node -> data=data;
    node -> left=NULL;
    node -> right=NULL;

    return (node);

}


















int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    struct node * root=newNode(1);
    root->left=newNode(2);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->left->right->left=newNode(8);
    root->right=newNode(3);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(9);
    root->right->right->right=newNode(10);



//    Preoder Traversal in BT
    // vector<int> preoder;
    // preodertra(root,preorder);
    // cout<<"Preoder Travesal :";
    // for(int i=0;i<preoder.size();i++){
    //     cout<<preoder[i]<<" ";
    // }


//    Preoder Traversal in BT
    vector<int> Inorder;
    Inordertra(root,Inorder);
    cout<<"Inoder Travesal :";
    for(int i=0;i<Inorder.size();i++){
        cout<<Inorder[i]<<" ";
    }







    return 0;
}