#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


// // Print Root to Node Path in a Binary Tree

// struct node{
//     int data;
//     struct node *left,*right;
// };
// bool getPath( node * root,vector<int> &arr,int x){
//     if(!root)
//     return false;
//     arr.push_back(root->data);
//     if(root->data==x)
//     return true;

//     if(getPath(root->left,arr,x)|| getPath(root->right,arr,x)){
//     return true;}

// arr.pop_back();
// return false;


// }

// struct node *newNode(int data){
//     struct node* node=(struct node*) malloc(sizeof(struct node));
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;
//     return (node);
// }

// // Lowest Common Ancestor for two given Nodes
// struct Node {
//     int key;
//     struct Node *left, *right;
// };
 
// Node* newNode(int k)
// {
//     Node* temp = new Node;
//     temp->key = k;
//     temp->left = temp->right = NULL;
//     return temp;
// }
// bool findPath(Node* root, vector<int>& path, int k)
// {
    
//     if (root == NULL)
//         return false;
//     path.push_back(root->key);
 
//     if (root->key == k)
//         return true;

//     if ((root->left && findPath(root->left, path, k))
//         || (root->right && findPath(root->right, path, k)))
//         return true;
 
//     path.pop_back();
//     return false;
// }
 
// int findLCA(Node* root, int n1, int n2)
// {
//     vector<int> path1, path2;
 
//     if (!findPath(root, path1, n1)
//         || !findPath(root, path2, n2))
//         return -1;
 
//     int i;
//     for (i = 0; i < path1.size() && i < path2.size(); i++)
//         if (path1[i] != path2[i])
//             break;
//     return path1[i - 1];
// }


// Maximum Width of a Binary Tree
// struct node{
//     int data;
//     struct node *left,*right;

// };

// int widthOfBinaryTree(node * root){
//     if(!root)
//     return 0;
//     int ans=0;
//     queue<pair<node * ,int >> q;
//     q.push({
//         root,
//     0
//     });

//     while (!q.empty())
//     {
//        int size=q.size();
//        int curMin=q.front().second;
//        int leftMost,rightMost;
//        for(int i=0;i<size;i++){
//         int cur_id=q.front().second - curMin;
//         node* temp=q.front().first;
//         q.pop();
//         if(i==0) leftMost=cur_id;;
//         if(i==size-1) rightMost=cur_id;
//         if(temp->left)
//         q.push({
//             temp->left,
//             cur_id * 2 + 1
//         });
//         if(temp->right)
//         q.push({
//             temp->right,
//             cur_id * 2 + 2
//         });

//         }
//         ans=max(ans,rightMost-leftMost + 1);

       

//     }
//     return ans;
    
// } 

// struct node* newNode(int data){
//     struct node *node=(struct node* )malloc(sizeof(struct node));
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;
//     return (node);
// }

// // Check for Children Sum Property in a Binary Tree
// struct node{
//     int data;
//     struct node *left,*right;

// };

// void reorder(node * root){
//     if(root==NULL) return;
//     int child=0;
//     if(root->left) {
//         child+=root->left->data;
        
//     }
//     if(root->right) {
//         child+=root->right->data;

//     }
//     if(child < root->data){
//         if(root->left) root->left->data=root->data;
//         else if(root->right) root->right->data=root->data;
//     }
//     reorder(root->left);
//     reorder(root->right);
//     int tot=0;
//     if(root->left) tot+=root->left->data;
//     if(root->right) tot+=root->right->data;
//     if(root->left || root->right) root->data=tot;
// }
// void changeTree(node * root){
//     reorder(root);
// }

// struct node *newNode(int data){
//     struct node *node=(struct node *)malloc(sizeof(struct node));
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;
//     return node;
// }




//Print all nodes at distance k from a given node
// struct Node{
// 	int data;
// 	Node* left;
// 	Node* right;
// };

// void printkdistanceNodeDown(Node* root, int k){
	
// 	if (root == NULL || k < 0) return;
// 	if (k==0){
// 		cout<< root->data<<endl;
// 		return;
// 	}
// 	printkdistanceNodeDown(root->left, k-1);
// 	printkdistanceNodeDown(root->right, k-1);
// }

// int printkdistanceNode(Node* root, Node* target , int k){

// 	if (root == NULL) return -1;

// 	if (root == target){
// 		printkdistanceNodeDown(root, k);
// 		return 0;
// 	}

// 	int dl = printkdistanceNode(root->left, target, k);

// 	if (dl != -1){
		
// 		if (dl + 1 == k)
// 			cout<<root->data<<endl;

		
// 		else
// 			printkdistanceNodeDown(root->right, k-dl-2);

// 		return 1 + dl;
// 	}


// 	int dr = printkdistanceNode(root->right, target, k);
// 	if (dr != -1){
// 		if (dr + 1 == k)
// 			cout<<root->data<<endl;
// 		else
// 			printkdistanceNodeDown(root->left, k-dr-2);
// 		return 1 + dr;
// 	}

// 	return -1;
// }

// Node* newNode(int data){
// 	Node* temp = new Node();
// 	temp->data = data;
// 	temp->left = temp->right = NULL;
// 	return temp;
// }


// minimum time taken to burn the binary tree from a node
// struct Node {
//     int key;
//     struct Node* left;
//     struct Node* right;
//     Node(int k)
//     {
//         key = k;
//         left = right = NULL;
//     }
// };
 
// int res = 0;

// int burnTime(Node* root, int leaf, int& dist)
// {
//     if (root == NULL)
//         return 0;
//     if (root->key == leaf) {
//         dist = 0;
//         return 1;
//     }
//     int ldist = -1, rdist = -1;
//     int lh = burnTime(root->left, leaf, ldist);
//     int rh = burnTime(root->right, leaf, rdist);
 
//     if (ldist != -1) {
//         dist = ldist + 1;
//         res = max(res, dist + rh);
//     }
//     else if (rdist != -1) {
//         dist = rdist + 1;
//         res = max(res, dist + lh);
//     }
//     return max(lh, rh) + 1;
// }

// Count Number of Nodes in a Binary Tree
// struct node{
//     int data;
//     struct node *left ,*right;

// };
// void inorderTraversal(node * curr,int &count){
//     if(curr==NULL) return ;
//     count++;
//     inorderTraversal(curr->left,count);
//     inorderTraversal(curr->right,count);
    


// }
// struct node *newNode(int data){
//     struct node *node=(struct node* )malloc(sizeof(struct node));
//     node->data=data;
//     node->left=NULL;
//     node->right=NULL;
//     return (node);
// }

// Construct A Binary Tree from Inorder and Preorder Traversal
struct node{
    int data;
    struct node *left,*right;
};
 
 struct node *newnode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
 }

 node * constructTree(vector<int> &preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,map<int,int> &mp){
    if(preStart>preEnd || inStart >inEnd) return NULL;
    node *root =newnode(preorder[preStart]);
    int elem=mp[root->data];
    int nElem=elem-inStart;
    root->left=constructTree(preorder,preStart+1,preStart+nElem,inorder,inStart,elem-1,mp);
    root->right=constructTree(preorder,preStart+nElem+1,preEnd,inorder,elem+1,inEnd,mp);
return root;
 }
 node * buildTree(vector<int> &preorder,vector<int> &inorder){
    int preStart=0,preEnd=preorder.size()-1;
    int inStart=0,inEnd=inorder.size()-1;
    map<int,int>mp;
    for(int  i=inStart;i<=inEnd;i++){
        mp[inorder[i]]=i;
    }
    return constructTree(preorder,preStart,preEnd,inorder,inStart,inEnd,mp);
 }









int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

 // Print Root to Node Path in a Binary Tree   

// struct node * root=newNode(1);
// root->left=newNode(2);
// root->right=newNode(3);
// root->left->left=newNode(4);
// root->left->right=newNode(5);
// root->left->right->left=newNode(6);
// root->left->right->right=newNode(7);


// vector<int> ans;
// bool res;
// res=getPath(root,ans,6);
// cout<<"The Path is ";
// for(auto it :ans){
// cout<< it<<" ";
// }


// Lowest Common Ancestor for two given Nodes
// Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     root->right->left = newNode(6);
//     root->right->right = newNode(7);
//     cout << "LCA(4, 5) = " << findLCA(root, 4, 5);
//     cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6);
//     cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4);
//     cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4);

// Maximum Width of a Binary Tree
// struct node *root=newNode(1);
// root->left=newNode(3);
// root->left->left=newNode(5);
// root->left->left->left=newNode(7);
// root->right=newNode(2);
// root->right->right=newNode(4);
// root->right->right->right=newNode(6);
// int maxWidth=widthOfBinaryTree(root);
// cout<<" The maximum width of the binary tree : "<<maxWidth;


// Check for Children Sum Property in a Binary Tree
// struct node *root=newNode(2);
// root->left=newNode(35);
// root->left->left=newNode(2);
// root->left->right=newNode(3);
// root->right=newNode(10);
// root->right->left=newNode(5);
// root->right->right=newNode(2);
// cout<<"The sum of the children in the binary tree : " ;
// changeTree(root);



//Print all nodes at distance k from a given node
	// Node* root = newNode(20);
	// root->left = newNode(8);
	// root->right = newNode(22);
	// root->left->left = newNode(4);
	// root->left->right = newNode(12);
	// root->left->right->left = newNode(10);
	// root->left->right->right = newNode(14);
	// Node* target = root->left->right;
	// printkdistanceNode(root, target, 2);

// minimum time taken to burn the binary tree from a node

// Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->left->left->left = new Node(8);
//     root->left->right->left = new Node(9);
//     root->left->right->right = new Node(10);
//     root->left->right->left->left = new Node(11);
//     int dist = -1;
//     int target = 11;
//     burnTime(root, target, dist);
//     cout << res;


// 
// Count Number of Nodes in a Binary Tree
// struct node *root=newNode(1);
// root->left=newNode(2);
// root->left->left=newNode(4);
// root->left->right=newNode(5);
// root->left->left->left=newNode(8);
// root->left->left->right=newNode(9);
// root->left->right->left=newNode(10);
// root->left->right->right=newNode(11);
// root->right=newNode(3);
// root->right->left=newNode(6);
// root->right->right=newNode(7);
// int count=0;
// inorderTraversal(root,count);
// cout<<"The total number of nodes in the given complete binary tree are: "<<count;


// Construct A Binary Tree from Inorder and Preorder Traversal

vector<int>preorder{10,20,40,50,30,60};
vector<int>inorder{40,20,50,10,60,30};
cout<<" Convert inorder to preorder : ";
struct node *root=buildTree(preorder,inorder);

    return 0;
}

