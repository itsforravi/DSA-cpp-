#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


// Search in a Binary Search Tree

struct node {
    int key;
    struct node* left,*right;

};

struct node* newNode(int item)
{
    struct node* temp
        = new struct node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


struct node *insert(struct node *node,int key){
    if(node==NULL){
        return newNode(key);
    }
    if( key <node->key){
        node->left=insert(node->left,key);
    }
    else if (key>node->key){
        node->right=insert(node->right,key);
    }
    return node;
}

struct node *search(struct node * root,int key){
    if(root==NULL || root->key==key){
     return root;
    }
    if(root->key<key)
        return search(root->right,key);
    return search(root->left,key);
}







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// Search in a Binary Search Tree

struct node *root=NULL;
root=insert(root,50);
insert(root,30);
insert(root,20);
insert(root,40);
insert(root,70);
insert(root,60);
insert(root,80);
int key=30;
if(search(root,key)==NULL){
    cout<<key<<"->"<<"I'm Not found"<<endl;
}
else{
    cout<<key<<"->"<<"I'm found"<<endl;
}





return 0;
}