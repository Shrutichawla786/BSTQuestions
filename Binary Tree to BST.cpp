link-->https://www.geeksforgeeks.org/problems/binary-tree-to-bst/1
Q.Binary Tree to BST
code-->
  void inorder(Node * root , vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left ,v);
        v.push_back(root->data);
        inorder(root->right ,v);
    }
    void inorderToBST(Node * root , vector<int>v , int &i){
        if(root==NULL){
            return;
        }
        inorderToBST(root->left , v , i);
        
        root->data= v[i];
        i++;
        inorderToBST(root->right , v , i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
        inorder(root ,v);
        sort(v.begin() , v.end());
        int i=0;
        inorderToBST(root , v ,i);
        return root;
        
    }

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).
