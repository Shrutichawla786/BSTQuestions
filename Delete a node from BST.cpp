https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1
Q.Delete a node from BST
code-->
  Node* minival(Node * root){
    Node * temp = root;
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
    
}
Node *deleteNode(Node *root, int x) {
    // your code goes here
    if(root==NULL){
        return NULL;
    }
    if(root->data==x){
        //case1--?0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        
        //case2-->1 child{1-->left child ,2-->right child};
        if(root->left == NULL && root->right !=NULL){
            Node * temp= root->right;
            delete root;
            return temp;
        }
        else if( root->right==NULL && root->left!=NULL){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        //case3-->2 childs
        if(root->right!=NULL && root->left !=NULL){
            int mini= minival(root->right)->data;
            root->data=mini;
            root->right= deleteNode(root->right , mini);
            return root;
        }
        
    }
    else if(root->data>x){
        root->left=deleteNode(root->left , x);
        return root;
    }
    else{
        root->right=deleteNode(root->right , x);
        return root;
    }
}

Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).
