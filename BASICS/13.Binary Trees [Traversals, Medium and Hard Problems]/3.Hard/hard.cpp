#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
// Print Root to Node Path in a Binary Tree
struct node{
    int data;
    struct node *left,*right;
};
bool getPath( node * root,vector<int> &arr,int x){
    if(!root)
    return false;
    arr.push_back(root->data);
    if(root->data==x)
    return true;

    if(getPath(root->left,arr,x)|| getPath(root->right,arr,x)){
    return true;}

arr.pop_back();
return false;


}

struct node *newNode(int data){
    struct node* node=(struct node*) malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
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
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->left->right->left=newNode(6);
root->left->right->right=newNode(7);


vector<int> ans;
bool res;
res=getPath(root,ans,7);
cout<<"The Path is ";
for(auto it :ans){
cout<< it<<" ";
}






    return 0;
}

