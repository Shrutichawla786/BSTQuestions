Link-->https://www.geeksforgeeks.org/problems/construct-bst-from-post-order/1
Q.Construct BST from Postorder
code-->
  Node* insert(Node* root , int d){
    if(root==NULL){
        root= new Node(d);
        return root;
    }
    if(root->data>d){
        root->left = insert(root->left , d);
        
    }
    if(root->data<d){
        root->right=insert(root->right , d);
    }
    return root;
}
Node *constructTree (int post[], int size)
{
//code here
Node* root=NULL;
    for(int i=size-1;i>=0;i--){
        root= insert(root ,post[i] );
    }
    return root;
    
}
Expected Time Complexity: O(No. of  nodes in BST)
Expected Auxiliary Space: O(No. of  nodes in BST)
