#include <bits/stdc++.h>
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




// // Inorde Traversal In BT
// struct node
// {
//     int data;
//     struct node * left,* right;
// };


// void Inordertra(node * curr , vector<int> &Inorder){
//     if(curr==NULL){ 
//         return;
//     }

//     Inordertra(curr -> left,Inorder);

//     Inorder.push_back(curr -> data);
    
//     Inordertra(curr -> right,Inorder);
// }

// struct node * newNode(int data){
//     struct node * node=(struct node *)malloc(sizeof(struct node));
//     node -> data=data;
//     node -> left=NULL;
//     node -> right=NULL;

//     return (node);

// }



// Postorder Traversal In BT
// struct node
// {
//     int data;
//     struct node * left,* right;
// };


// void postordertra(node * curr , vector<int> &postorder){
//     if(curr==NULL){ 
//         return;
//     }

//     postordertra(curr -> left,postorder);
//     postordertra(curr -> right,postorder);
//      postorder.push_back(curr -> data);
// }

// struct node * newNode(int data){
//     struct node * node=(struct node *)malloc(sizeof(struct node));
//     node -> data=data;
//     node -> left=NULL;
//     node -> right=NULL;

//     return (node);

// }

// Level Order Traversal of a Binary Tree
// struct Node {
//     int data;
//     struct Node *left, *right;
// };
 
// void printLevelOrder(Node* root)
// {
   
//     if (root == NULL)
//         return;
 
    
//     queue<Node*> q;
 
   
//     q.push(root);
 
//     while (q.empty() == false) {
         
//           Node* node = q.front();
//         cout << node->data << " ";
//         q.pop();
 
        
//         if (node->left != NULL)
//             q.push(node->left);
 
        
//         if (node->right != NULL)
//             q.push(node->right);
//     }
// }
 

//  struct Node* newNode(int data)
// {
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left =NULL;
//      temp->right = NULL;
//     return temp;
// }


// PreOrder Itravtive  Binary search tree
// struct node
// {
//     int data;
//     node *left,*right;
    
// };
// vector<int>preorderIt(node *curr){
//     vector<int> preorder;
//     if(curr==NULL)
//     return preorder;
//     stack<node*> st;
//     st.push(curr);

//     while(!st.empty()){
//       node *topnode=st.top();
//       preorder.push_back(topnode->data);
//       st.pop();
//       if(topnode->right!=NULL){
//         st.push(topnode->right);
//       }
//       if(topnode->left!=NULL){
//         st.push(topnode->left);
//       }
//     }
//       return preorder;


//     }
//     struct node * newNode(int data){
//     struct node *node=(struct node*)malloc(sizeof(struct node));
//     node->data=data;
//     node->right=NULL;
//     node->left=NULL;
//     return (node);
    
// }

// Inorder Traversal of Binary Tree

//  struct node
// {
//     int data;
//     node *left,*right;
    
// };

// vector<int> InorderIt(node *curr){
//     vector<int> inorder;
//     stack<node*> st;
//     while(true){
//         if(curr!=NULL){
//             st.push(curr);
//             curr=curr->left;
//         }
//         else{
//             if(st.empty()==true) break;
//             curr=st.top();
//             inorder.push_back(curr->data);
//             st.pop();
//             curr=curr->right;

//         }
//     }
//     return inorder;

// }
// struct node *newNode(int data){
// struct node *node=(struct node*)malloc(sizeof(struct node));
// node->data=data;
// node->right=NULL;
// node->left=NULL;


// return (node);
// }



// Postorder Traversal in iteravtive using 2 stack

// struct node {
//   int data;
//   struct node * left, * right;
// };

// vector < int > postOrderTrav(node * curr) {

//   vector < int > postOrder;
//   if (curr == NULL) return postOrder;

//   stack < node * > s1;
//   stack < node * > s2;
//   s1.push(curr);
//   while (!s1.empty()) {
//     curr = s1.top();
//     s1.pop();
//     s2.push(curr);
//     if (curr -> left != NULL)
//       s1.push(curr -> left);
//     if (curr -> right != NULL)
//       s1.push(curr -> right);
//   }
//   while (!s2.empty()) {
//     postOrder.push_back(s2.top() -> data);
//     s2.pop();
//   }
//   return postOrder;
// }

// vector<int> postorder;
// if(curr==NULL) return postorder;
// stack<node *>st1;
// stack<node *> st2;
// st1.push(curr);
// while(!st1.empty()){
//   curr=st1.top();
//   st1.pop();
//   st2.push(curr);
//   if(curr->left!=NULL){
//     st1.push(curr->left);
//   }
//   if(curr->right!=NULL){
//     st1.push(curr->right);
//   }
// }
//   while(!st2.empty()){
//     postorder.push_back(st2.top()->data);
//     st2.pop();
//   }

//   return postorder;
// }




// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }


// Postorder Traversal in iteravtive using 1 stack
// struct node{
//   int data;
//   struct node *left,*right;
// };

// vector<int> postOrderTrav1(node * curr){
//   vector<int> postorder;
//   if(curr==NULL) return postorder;
//   stack<node *> st;
//   while (curr!=NULL || !st.empty())
//   {
//     if(curr!=NULL){
//       st.push(curr);
//       curr=curr->left;
//     }
//     else{
//       node *temp=st.top()->right;
//       if(temp==NULL){
//         temp=st.top();
//         st.pop();
//         postorder.push_back(temp->data);
//         while (!st.empty() && temp==st.top()->right)
//         {
//             temp=st.top();
//         st.pop();
//         postorder.push_back(temp->data);
//         }
        
//       }
//        else curr=temp;
//     }
   
//   }
  
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// Preorder Inorder Postorder Traversals in One Traversal

// struct node{
//   int data;
//   struct node *left,*right;
// };

// void allTraversal(node * root,vector<int> &pre,vector<int> &in,vector<int> &post)
// {
//   stack<pair<node *,int>> st;
//   st.push({
//     root,1
//   });
//   if(root==NULL) return;
//   while (!st.empty())
//   {
//     auto it=st.top();
//     st.pop();

//     if(it.second==1){
//       pre.push_back(it.first->data);
//       it.second++;
//       st.push(it);
//       if(it.first->left!=NULL){
//         st.push({
//           it.first->left,
//           1
//         });

//       }



//     }
// else if(it.second==2){
//       in.push_back(it.first->data);
//       it.second++;
//       st.push(it);
//       if(it.first->right!=NULL){
//         st.push({
//           it.first->right,1
//         });

//       }}
//       else{
//         post.push_back(it.first->data);
//       }}
  
// }
// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }


// Height of tree in binary search

struct node{
  int data;
  struct node *left,*right;
};
// vector<int> heightoftree(node * curr){
//   if(curr==NULL) return heightoftree ;
//   else{
//     node * ldepth=heightoftree(curr->left);
//     node * rdepth=heightoftree(curr->right);

//     if(ldepth>rdepth){
//       return(ldepth+1);
//     }
//     else{
//       return(rdepth+1);
//     }
//   }
// }

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
    root->right->left->right=newNode(7);
    root->right->left->right->right=newNode(8);
    // root->right->right->left=newNode(9);
    // root->right->right->right=newNode(10);



//    Preorder Traversal in BT
    // vector<int> preorder;
    // preodertra(root,preorder);
    // cout<<"Preoder Travesal :";
    // for(int i=0;i<preorder.size();i++){
    //     cout<<preorder[i]<<" ";
    // }


//    Inorder Traversal in BT
    // vector<int> Inorder;
    // Inordertra(root,Inorder);
    // cout<<"Inoder Travesal :";
    // for(int i=0;i<Inorder.size();i++){
    //     cout<<Inorder[i]<<" ";
    // }


//    Postorder Traversal in BT
    // vector<int> postorder;
    // postordertra(root,postorder);
    // cout<<"postoder Travesal :";
    // for(int i=0;i<postorder.size();i++){
    //     cout<<postorder[i]<<" ";
    // }

// // Level Order Traversal of a Binary Tree
//  struct Node * root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(6);
 
//     cout << "Level Order traversal of binary tree is \n";
//     printLevelOrder(root);


// Preorder itrative Binary search tree
// vector<int> preorder;
//     preorder=preorderIt(root);
//     cout<<"Preorder Travesal :";
//     for(int i=0;i<preorder.size();i++){
//         cout<<preorder[i]<<" ";
//     }

    // // Inorder Traversal of Binary Tree
    // vector<int> inorder;
    // inorder=InorderIt(root);
    // cout<<"Inorder Travesal :";
    // for(int i=0;i<inorder.size();i++){
    //     cout<<inorder[i]<<" ";
    // }



    // Postorder Traversal in iteravtive using 2 stack
    // vector<int> postOrder;
    // postOrder=postOrderTrav(root);
    // cout<<"postOrder Travesal :";
    // for(int i=0;i<postOrder.size();i++){
    //     cout<<postOrder[i]<<" ";
    // }

    // Postorder Traversal in iteravtive using 1 stack
    // vector<int> postOrder;
    // postOrder=postOrderTrav1(root);
    // cout<<"postOrder Travesal :";
    // for(int i=0;i<postOrder.size();i++){
    //     cout<<postOrder[i]<<" ";
    // }

  //    struct node * root = newNode(1);
  // root -> left = newNode(2);
  // root -> left -> left = newNode(4);
  // root -> left -> right = newNode(5);
  // root -> right = newNode(3);
  // root -> right -> left = newNode(6);
  // root -> right -> right = newNode(7);

  // vector < int > pre, in , post;
  // allTraversal(root, pre, in , post);

  // cout << "The preorder Traversal is : ";
  // for (auto nodeVal: pre) {
  //   cout << nodeVal << " ";
  // }
  // cout << endl;
  // cout << "The inorder Traversal is : ";
  // for (auto nodeVal: in ) {
  //   cout << nodeVal << " ";
  // }
  // cout << endl;
  // cout << "The postorder Traversal is : ";
  // for (auto nodeVal: post) {
  //   cout << nodeVal << " ";
  // }
  // cout << endl;



// Height of tree in binary search
cout << "Height of tree is " << maxDepth(root);




    return 0;
}