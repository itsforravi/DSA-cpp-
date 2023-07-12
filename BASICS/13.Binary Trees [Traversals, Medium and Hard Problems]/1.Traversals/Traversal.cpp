#include<bits/stdc++.h>
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


// PreOrder Itravtive  
struct node
{
    int data;
    node *left,*right;
    
};
vector<int>preorderIt(node *curr){
    vector<int> preorder;
    if(curr==NULL)
    return preorder;
    stack<node*> st;
    st.push(curr);

    while(!st.empty()){
      node *topnode=st.top();
      preorder.push_back(topnode->data);
      st.pop();
      if(topnode->right!=NULL){
        st.push(topnode->right);
      }
      if(topnode->left!=NULL){
        st.push(topnode->left);
      }
    }
      return preorder;


    }
    struct node * newNode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->right=NULL;
    node->left=NULL;
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
    root->left->left=newNode(5);
    root->left->right=newNode(4);
    root->left->right->left=newNode(8);
    root->right=newNode(3);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(8);
    root->right->right->right=newNode(11);



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


// Preorder itrative
vector<int> preorder;
    preorder=preorderIt(root);
    cout<<"Preorder Travesal :";
    for(int i=0;i<preorder.size();i++){
        cout<<preorder[i]<<" ";
    }





    return 0;
}