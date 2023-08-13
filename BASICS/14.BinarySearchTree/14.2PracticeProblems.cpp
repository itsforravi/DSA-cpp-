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

// // Insert Into A Binary Search Tree
// class Node {
//     public:
//     int val;
//     Node *left,*right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;

//     }
// };
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

// void insert(Node*& root, int key)
// {
//     Node* node = new Node(key);
//     if (!root) {
//         root = node;
//         return;
//     }
//     Node* prev = NULL;
//     Node* temp = root;
//     while (temp) {
//         if (temp->val > key) {
//             prev = temp;
//             temp = temp->left;
//         }
//         else if (temp->val < key) {
//             prev = temp;
//             temp = temp->right;
//         }
//     }
//     if (prev->val > key)
//         prev->left = node;
//     else
//         prev->right = node;
// }
 
// void inorder(Node* root)
// {
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


    // Other function calls in insert bst
//     if (root == NULL)
//         return;
//     else {
//         inorder(root->left);
//         cout << root->val << " ";
//         inorder(root->right);
//     }
// }



// Delete a Node in Binary Search Tree


// class TreeNode {
//     public:
//     int val;
//    TreeNode *left,*right;
//    TreeNode(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;

//     }
// };

// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if (root == NULL) {
//             return NULL;
//         }
//         if (root->val == key) {
//             return helper(root);
//         }
//         TreeNode *dummy = root;
//         while (root != NULL) {
//             if (root->val > key) {
//                 if (root->left != NULL && root->left->val == key) {
//                     root->left = helper(root->left);
//                     break;
//                 } else {
//                     root = root->left;
//                 }
//             } else {
//                 if (root->right != NULL && root->right->val == key) {
//                     root->right = helper(root->right);
//                     break;
//                 } else {
//                     root = root->right;
//                 }
//             }
//         }
//         return dummy;
//     }
    
//     TreeNode* helper(TreeNode* root) {
//             if (root->left == NULL) 
//             {
//                 return root->right;
//             } 
//             else if (root->right == NULL)
//             {
//                 return root->left;
//             } 
//             TreeNode* rightChild = root->right;
//             TreeNode* lastRight = findLastRight(root->left);
//             lastRight->right = rightChild;
//             return root->left;
//     }
//     TreeNode* findLastRight(TreeNode* root) {
//         if (root->right == NULL) {
//             return root;
//         }
//         return findLastRight(root->right);
//     }
// };

// void inorder(Node* root){
//       if (root == NULL)
//         return;
//     else {
//         inorder(root->left);
//         cout << root->val << " ";
//         inorder(root->right);
//     }
// }


// Other solution

// struct Node {
//     int key;
//     struct Node *left, *right;
// };
 
// Node* newNode(int item)
// {
//     Node* temp = new Node;
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }
 
// void inorder(Node* root)
// {
//     if (root != NULL) {
//         inorder(root->left);
//         printf("%d ", root->key);
//         inorder(root->right);
//     }
// }

// Node* insert(Node* node, int key)
// {
//     if (node == NULL)
//         return newNode(key);
 
//     if (key < node->key)
//         node->left = insert(node->left, key);
//     else
//         node->right = insert(node->right, key);
 
//     return node;
// }
 
// Node* deleteNode(Node* root, int k)
// {
//     if (root == NULL)
//         return root;
 
//     if (root->key > k) {
//         root->left = deleteNode(root->left, k);
//         return root;
//     }
//     else if (root->key < k) {
//         root->right = deleteNode(root->right, k);
//         return root;
//     }
 
   
//     if (root->left == NULL) {
//         Node* temp = root->right;
//         delete root;
//         return temp;
//     }
//     else if (root->right == NULL) {
//         Node* temp = root->left;
//         delete root;
//         return temp;
//     }
 
//     else {
 
//         Node* succParent = root;
 
//         Node* succ = root->right;
//         while (succ->left != NULL) {
//             succParent = succ;
//             succ = succ->left;
//         }
 
   
//         if (succParent != root)
//             succParent->left = succ->right;
//         else
//             succParent->right = succ->right;
 
//         root->key = succ->key;
 
//         delete succ;
//         return root;
//     }
// }


//K-th smallest/largest element in the BST
// struct node{
//     int data;
//     node *left,*right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// node* insertBST(node *root,int val){
//     if(root==NULL){
//         return new node(val);
//     }
//     if(val<root->data){
//      root->left=insertBST(root->left,val);
//     }
//     else{
//         root->right=insertBST(root->right,val);
//     }
//     return root;
// }


// node *kthlargest(node *root,int &k){
//     if (root==NULL){
//         return NULL;}
//         node *right=kthlargest(root->right,k);
//         if(right!=NULL)
//         return right;
//         k--;
//         if(k==0)
//         return root;
//         return kthlargest(root->left,k);
//     }

// node *kthsmallest(node *root,int &k){
//     if (root==NULL){
//         return NULL;}
//         node *left=kthlargest(root->left,k);
//         if(left!=NULL)
//         return left;
//         k--;
//         if(k==0)
//         return root;
//         return kthsmallest(root->right,k);
//     }


// A program to check if a Binary Tree is BST or not

/* A binary tree node has data,
pointer to left child and
a pointer to right child */
class node {
public:
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int isBSTUtil(node* node, int min, int max);


int isBST(node* node)
{
	return (isBSTUtil(node, INT_MIN, INT_MAX));
}


int isBSTUtil(node* node, int min, int max)
{
	if (node == NULL)
		return 1;
	if (node->data < min || node->data > max)
		return 0;
	return isBSTUtil(node->left, min, node->data - 1)
		&& 
		isBSTUtil(node->right, node->data + 1,
					max); 
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
// Node* root = NULL;

//      insert(root,50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);
//  cout<<"Insert data in the BST :->"<<endl;
//     // Print inorder traversal of the BST
//     inorder(root);



// Delete a Node in Binary Search Tree
// TreeNode* root = NULL;
// delete(root,10);
//      insert(root,50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);
// cout<<"delete the node is -> ";

// inorder(root);

//  Node* root = NULL;
//     root = insert(root, 50);
//     root = insert(root, 30);
//     root = insert(root, 20);
//     root = insert(root, 40);
//     root = insert(root, 70);
//     root = insert(root, 60);
 
//     printf("Original BST: ");
//     inorder(root);
   
   
//     root = deleteNode(root,30 );
//      printf("\n\nDelete a Leaf Node:30\n");
//     printf("Modified BST tree after deleting Leaf Node:\n");
//     inorder(root);

// K-th largest/smallast element in the BST

//  int arr[]={10,40,45,20,25,30,50},i;
//  int k=3;
//  node * root=NULL;
//  for(i=0;i<7;i++){
//     root=insertBST(root,arr[i]);

//  }
//  cout<<"\n";
//  int p=k;
//  node * large=kthlargest(root,k);
//  k=p;
//  node * small=kthsmallest(root,k);

//  if(large==NULL){
//     cout<<"Invalid input"<<"\n";
//  }
//  else{
//     cout<<"K-th largest element is "<<large->data<<"\n";
//  }
//  if(small==NULL){
//     cout<<"Invalid input"<<"\n";
//  }
//  else{
//     cout<<"K-th small element is "<<small->data<<"\n";
//  }


// A program to check if a Binary Tree is BST or not

node* root = new node(4);
	root->left = new node(2);
	root->right = new node(5);
	root->left->left = new node(1);
	root->left->right = new node(3);

	
	if (isBST(root))
		cout << "BST ";
	else
		cout << "Not a BST or May be BT";

    return 0;
}