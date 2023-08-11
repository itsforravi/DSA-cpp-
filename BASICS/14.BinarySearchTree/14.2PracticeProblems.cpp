#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


class node {
    public:
    int data;
    node *left,*right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
int findceil(node *root , int key)
{
  int ceil =-1;
  while(root){
    if(root->data==key){
        ceil=root->data;
        return ceil;
    }
    if(key>root->data){
        root=root->right;
    }
    else{
        ceil=root->data;
        root=root->left;
    }
  }
  return ceil;
}









int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
// node* NewRoot = NULL;
//     node* root = new node(2);
//     root->left = new node(7);
//     root->right = new node(5);
//     root->left->right = new node(6);
//     root->left->right->left = new node(1);
//     root->left->right->right = new node(11);
//     root->right->right = new node(9);
//     root->right->right->left = new node(4);

    cout<<" Ceil value of tree : "<<findceil<<endl;





    return 0;
}