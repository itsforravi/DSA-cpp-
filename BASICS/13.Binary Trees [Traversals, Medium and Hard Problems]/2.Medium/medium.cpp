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
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int d)
//     {
//         int data = d;
//         left = right = NULL;
//     }
// };
// int height(Node* node)
// {
//         if (node == NULL)
//         return 0;
    
// }
//     bool BalanceTree(Node* root){
//         if(root==NULL)
//         return -1;
//         int leftHeight=height(root->left);
//         int rightHeight=height(root->right);
//         if(rightHeight==-1)
//         return -1;
//         if(abs(leftHeight-rightHeight)>1){
//             return -1;
//         }
//         return max(leftHeight,rightHeight)+1;

//     }

// Calculate the Diameter of a Binary Tree
// class Solution{
//     public:
//     int diameteroftree(TreeNode * root){
//         int diameter=0;
//         height(root,diameter);
//         return diameter;
//     }
//     private:
//     int height(TreeNode* node,int& diameter){
//         if(!node){
//             return 0;
//         }
//        int lh=height(node->left,diameter);
//        int rh=height(node->right,diameter);
//        diameter=max(diameter,lh+rh);


//        return 1+max(lh,rh);


//     }
// };





// struct node {
// 	int data;
// 	struct node *left, *right;
// };

// // struct node* newNode(int data);

// // int max(int a, int b) { return (a > b) ? a : b; }

// int height(struct node* node);

// int diameter(struct node* tree)
// {
	
// 	if (tree == NULL)
// 		return 0;

// 	int lheight = height(tree->left);
// 	int rheight = height(tree->right);
// 	int ldiameter = diameter(tree->left);
// 	int rdiameter = diameter(tree->right);

	
// 	return max(lheight + rheight + 1,
// 			max(ldiameter, rdiameter));
// }

// int height(struct node* node)
// {
// 	if (node == NULL)
// 		return 0;

	
// 	return 1 + max(height(node->left), height(node->right));
// }


// struct node* newNode(int data)
// {
// 	struct node* node
// 		= (struct node*)malloc(sizeof(struct node));
// 	node->data = data;
// 	node->left = NULL;
// 	node->right = NULL;

// 	return (node);
// }

// Maximum Sum Path in Binary Tree

// struct Node{
//      int data;
//      struct node *left,*right;
// };


// int findmaxpathsum(node * root, int& maxi){
//     if(root==NULL) return 0;
//     int leftpath=max(0,findmaxpathsum(root->left ,maxi));
//     int rightpath=max(0,findmaxpathsum(root->right ,maxi));
//     int val=root->data;
//     maxi=max(maxi,(leftpath+rightpath)+val);
//     return max(leftpath,rightpath)+val;
// }

// int maxPathSum(node* root){
//     int maxi=INT_MIN;
//     findmaxpathsum(root,maxi);
//     return maxi;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// Maximum Sum Path in Binary Tree
// struct node {
//   int data;
//   struct node * left, * right;
// };

// int findMaxPathSum(node * root, int & maxi) {
//   if (root == NULL) return 0;

//   int leftMaxPath = max(0, findMaxPathSum(root -> left, maxi));
//   int rightMaxPath = max(0, findMaxPathSum(root -> right, maxi));
//   int val = root -> data;
//   maxi = max(maxi, (leftMaxPath + rightMaxPath) + val);
//   return max(leftMaxPath, rightMaxPath) + val;

// }

// int maxPathSum(node * root) {
//   int maxi = INT_MIN;
//   findMaxPathSum(root, maxi);
//   return maxi;

// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }


// Check if two trees are identical

// struct node{
//   int data;
//   struct node *left,*right;
// };
//  bool isidentical(node *node1,node *node2){
//        if(node1==NULL && node2==NULL){
//         return true;
//        }
//        else if( node1==NULL || node2==NULL){
//         return false;
//        }
//        return ((node1->data==node2->data)&& isidentical(node1->left,node2->left)&&isidentical(node1->right,node2->right));
//  }

// struct node *newNode(int data){
//   struct node *node=(struct node*)malloc(sizeof(struct node));
//   node->data=data;
//   node->left=NULL;
//   node->right=NULL;
// }



// Zig Zag Traversal Of Binary Tree

// class Node {
//   public:
//     int val;
//   Node * left, * right;
// };

// vector < vector < int >> zigzaglevel(Node * root) {
//   vector < vector < int >> result;
//   if (root == NULL) {
//     return result;
//   }

//   queue < Node * > nodesQueue;
//   nodesQueue.push(root);
//   bool leftToRight = true;

//   while (!nodesQueue.empty()) {
//     int size = nodesQueue.size();
//     vector < int > row(size);
//     for (int i = 0; i < size; i++) {
//       Node * node = nodesQueue.front();
//       nodesQueue.pop();

//       // find position to fill node's value
//       int index = (leftToRight) ? i : (size - 1 - i);

//       row[index] = node -> val;
//       if (node -> left) {
//         nodesQueue.push(node -> left);
//       }
//       if (node -> right) {
//         nodesQueue.push(node -> right);
//       }
//     }
//     // after this level
//     leftToRight = !leftToRight;
//     result.push_back(row);
//   }
//   return result;
// }
// Node * newNode(int data) {
//   Node * node = new Node;
//   node -> val = data;
//   node -> left = NULL;
//   node -> right = NULL;
//   return node;
// }




// Boundary Traversal of a Binary Tree
// struct node {
//   int data;
//   struct node * left, * right;
// };

// bool isLeaf(node * root) {
//   return !root -> left && !root -> right;
// }

// void addLeftBoundary(node * root, vector < int > & res) {
//   node * cur = root -> left;
//   while (cur) {
//     if (!isLeaf(cur)) res.push_back(cur -> data);
//     if (cur -> left) cur = cur -> left;
//     else cur = cur -> right;
//   }
// }
// void addRightBoundary(node * root, vector < int > & res) {
//   node * cur = root -> right;
//   vector < int > tmp;
//   while (cur) {
//     if (!isLeaf(cur)) tmp.push_back(cur -> data);
//     if (cur -> right) cur = cur -> right;
//     else cur = cur -> left;
//   }
//   for (int i = tmp.size() - 1; i >= 0; --i) {
//     res.push_back(tmp[i]);
//   }
// }


// void addLeaves(node * root, vector < int > & res) {
//   if (isLeaf(root)) {
//     res.push_back(root -> data);
//     return;
//   }
//   if (root -> left) addLeaves(root -> left, res);
//   if (root -> right) addLeaves(root -> right, res);
// }

// vector < int > printBoundary(node * root) {
//   vector < int > res;
//   if (!root) return res;

//   if (!isLeaf(root)) res.push_back(root -> data);

//   addLeftBoundary(root, res);

//   addLeaves(root, res);

//   addRightBoundary(root, res);
//   return res;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }


// // Vertical Order Traversal of Binary Tree
// struct node {
//   int data;
//   struct node * left, * right;
// };

// vector < vector < int >> findVertical(node * root) {
//   map < int, map < int, multiset < int >>> nodes;
//   queue < pair < node * , pair < int, int >>> todo;
//   todo.push({
//     root,
//     {
//       0,
//       0
//     }
//   }); //initial vertical and level
//   while (!todo.empty()) {
//     auto p = todo.front();
//     todo.pop();
//     node * temp = p.first;

//     //x -> vertical , y->level
//     int x = p.second.first, y = p.second.second;
//     nodes[x][y].insert(temp -> data); //inserting to multiset

//     if (temp -> left) {
//       todo.push({
//         temp -> left,
//         {
//           x - 1,
//           y + 1
//         }
//       });
//     }
//     if (temp -> right) {
//       todo.push({
//         temp -> right,
//         {
//           x + 1,
//           y + 1
//         }
//       });
//     }
//   }
//   vector < vector < int >> ans;
//   for (auto p: nodes) {
//     vector < int > col;
//     for (auto q: p.second) {
//       col.insert(col.end(), q.second.begin(), q.second.end());
//     }
//     ans.push_back(col);
//   }
//   return ans;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }


//Top view of a Binary Tree
struct Node {
    Node* left;
    Node* right;
    int hd;
    int data;
};
 
Node* newNode(int key)
{
    Node* node = new Node();
    node->left = node->right = NULL;
    node->data = key;
    return node;
}

void topview(Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    map<int, int> m;
    int hd = 0;
    root->hd = hd;
    q.push(root);
 
    cout << "The top view of the tree is : \n";
 
    while (q.size()) {
        hd = root->hd;
        if (m.count(hd) == 0)
            m[hd] = root->data;
        if (root->left) {
            root->left->hd = hd - 1;
            q.push(root->left);
        }
        if (root->right) {
            root->right->hd = hd + 1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }
 
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << i->second << " ";
    }
} 














 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
//     struct node * root=newNode(-10);
//     root->left=newNode(2);
//     root->left->left=newNode(4);
//     root->left->right=newNode(5);
//     // root->left->right->left=newNode(6);
//     root->right=newNode(3);
//     root->right->left=newNode(6);
//     root->right->left->right=newNode(9);
//     root->right->left->right->right=newNode(8);
// //     // root->right->right->left=newNode(9);



//    // Height of tree in binary search
// cout << "Height of tree is " << maxDepth(root);
//    Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left= new Node(6);
//     root->right->right= new Node(7);
 
    // if (BalanceTree(root))
    //     cout << "Tree is balanced";
    // else
    //     cout << "Tree is not balanced";


// Calculate the Diameter of a Binary Tree
	// struct node* root = newNode(1);
	// root->left = newNode(2);
	// root->right = newNode(3);
	// root->left->left = newNode(4);
	// root->left->right = newNode(5);

	// cout << "Diameter of the given binary tree is "
	// 	<< diameter(root);


// Maximum Sum Path in Binary Tree
    // int ans=maxPathSum(root);
    // cout<<"The Max Path Sum for this tree is " << ans;


// Check if two trees are identical

// struct node * root1 = newNode(1);
//   root1 -> left = newNode(2);
//   root1 -> right = newNode(3);
//   root1 -> right -> left = newNode(4);
//   root1 -> right -> right = newNode(5);

//   struct node * root2 = newNode(1);
//   root2 -> left = newNode(2);
//   root2 -> right = newNode(3);
//   root2 -> right -> left = newNode(4);
  

//   if(isidentical(root1,root2)){
//     cout<<"Two trees are identical..";
//   }
//   else cout<<"Two trees are not indetical...";


// Zig Zag Traversal Of Binary Tree
  // int i, j;
  // Node * root = newNode(3);
  // root -> left = newNode(9);
  // root -> right = newNode(20);
  // root -> right -> left = newNode(15);
  // root -> right -> right = newNode(7);
  // vector < vector < int >> ans;
  // ans = zigzaglevel(root);
  // cout << "Zig Zag Traversal of Binary Tree" << endl;
  // for (i = 0; i < ans.size(); i++) {
  //   for (j = 0; j < ans[i].size(); j++) {
  //     cout << ans[i][j] << " ";
  //   }
  //   cout << endl;
  // }



  // Boundary Traversal of a Binary Tree
  //   struct node * root = newNode(1);
  // root -> left = newNode(2);
  // root -> left -> left = newNode(3);
  // root -> left -> left -> right = newNode(4);
  // root -> left -> left -> right -> left = newNode(5);
  // root -> left -> left -> right -> right = newNode(6);
  // root -> right = newNode(7);
  // root -> right -> right = newNode(8);
  // root -> right -> right -> left = newNode(9);
  // root -> right -> right -> left -> left = newNode(10);
  // root -> right -> right -> left -> right = newNode(11);

  // vector < int > boundaryTraversal;
  // boundaryTraversal = printBoundary(root);

  // cout << "The Boundary Traversal is : ";
  // for (int i = 0; i < boundaryTraversal.size(); i++) {
  //   cout << boundaryTraversal[i] << " ";
  // }


// Vertical Order Traversal of Binary Tree
// struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> left -> left = newNode(4);
//   root -> left -> right = newNode(10);
//   root -> left -> left -> right = newNode(5);
//   root -> left -> left -> right -> right = newNode(6);
//   root -> right = newNode(3);
//   root -> right -> left = newNode(9);
//   root -> right -> right = newNode(10);

//   vector < vector < int > > verticalTraversal;
//   verticalTraversal = findVertical(root);

//   cout << "The Vertical Traversal is : " << endl;
//   for (auto vertical: verticalTraversal) {
//     for (auto nodeVal: vertical) {
//       cout << nodeVal << " ";
//     }
//     cout << endl;
//   }

// 

Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);
    topview(root);

    return 0;
}