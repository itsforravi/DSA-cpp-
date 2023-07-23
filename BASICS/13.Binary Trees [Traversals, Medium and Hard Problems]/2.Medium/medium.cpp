#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;




// Height of tree in binary search

// struct node{
//   int data;
//   struct node *left,*right;
// };
// int maxDepth(node* node)
// {
//     if (node == NULL)
//         return 0;
//     else {
        
//         int lDepth = maxDepth(node->left);
//         int rDepth = maxDepth(node->right);
 
        
//         if (lDepth > rDepth)
//             return (lDepth + 1);
//         else
//             return (rDepth + 1);
//     }
// }



//  struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// Check if the Binary Tree is Balanced Binary Tree
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        int data = d;
        left = right = NULL;
    }
};
int height(Node* node)
{
        if (node == NULL)
        return 0;
    
}
    bool BalanceTree(Node* root){
        if(root==NULL)
        return -1;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(rightHeight==-1)
        return -1;
        if(abs(leftHeight-rightHeight)>1){
            return -1;
        }
        return max(leftHeight,rightHeight)+1;

    }





















 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
//     struct node * root=newNode(1);
//     root->left=newNode(2);
//     root->left->left=newNode(4);
//     root->left->right=newNode(15);
//     // root->left->right->left=newNode(6);
//     root->right=newNode(3);
//     root->right->left=newNode(6);
//     root->right->left->right=newNode(9);
//     root->right->left->right->right=newNode(8);
//     // root->right->right->left=newNode(9);



//    // Height of tree in binary search
// cout << "Height of tree is " << maxDepth(root);
   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
 
    if (BalanceTree(root))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";




    return 0;
}