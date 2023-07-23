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
/* CPP program to check if
a tree is height-balanced or not */



/* A binary tree node has data,
pointer to left child and
a pointer to right child */
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

// Function to calculate the height of a tree
int height(Node* node)
{
	// base case tree is empty
	if (node == NULL)
		return 0;

	// If tree is not empty then
	// height = 1 + max of left height
	// and right heights
	return 1 + max(height(node->left), height(node->right));
}

// Returns true if binary tree
// with root as root is height-balanced
bool isBalanced(Node* root)
{
	// for height of left subtree
	int lh;

	// for height of right subtree
	int rh;

	// If tree is empty then return true
	if (root == NULL)
		return 1;

	// Get the height of left and right sub trees
	lh = height(root->left);
	rh = height(root->right);

	if (abs(lh - rh) <= 1 && isBalanced(root->left)
		&& isBalanced(root->right))
		return 1;

	// If we reach here then tree is not height-balanced
	return 0;
}

// Driver code
// int main()
// {
// 	Node* root = new Node(1);
// 	root->left = new Node(2);
// 	root->right = new Node(3);
// 	root->left->left = new Node(4);
// 	root->left->right = new Node(5);
// 	root->left->left->left = new Node(8);

// 	if (isBalanced(root))
// 		cout << "Tree is balanced";
// 	else
// 		cout << "Tree is not balanced";
// 	return 0;
// }

// This code is contributed by rathbhupendra





















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
	root->left->left->left = new Node(8);

	if (isBalanced(root))
		cout << "Tree is balanced";
	else
		cout << "Tree is not balanced";


    return 0;
}