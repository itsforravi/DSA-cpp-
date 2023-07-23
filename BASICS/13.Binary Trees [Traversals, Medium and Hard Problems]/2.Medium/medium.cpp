#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;




// Height of tree in binary search

struct node{
  int data;
  struct node *left,*right;
};
int maxDepth(node* node)
{
    if (node == NULL)
        return 0;
    else {
        
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
 
        
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}



 struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

// Check if the Binary Tree is Balanced Binary Tree





















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
    root->left->right=newNode(15);
    // root->left->right->left=newNode(6);
    root->right=newNode(3);
    root->right->left=newNode(6);
    root->right->left->right=newNode(9);
    root->right->left->right->right=newNode(8);
    // root->right->right->left=newNode(9);



   // Height of tree in binary search
cout << "Height of tree is " << maxDepth(root);




    return 0;
}