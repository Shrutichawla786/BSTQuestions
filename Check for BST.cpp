link-->https://www.geeksforgeeks.org/problems/check-for-bst/1
Q.Check for BST
Code-->
  bool BST(Node * root , int min , int max){
        if(root==NULL){
            return true;
        }
        if(root->data>min &&root->data<max){
            bool left = BST(root->left ,min, root->data  );
            bool right= BST(root->right , root->data , max);
            return left && right;
        }
        else{
            return false;
        }
    }
    bool isBST(Node* root) 
    {
        // Your code here
       return BST(root , INT_MIN , INT_MAX);
    }

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).
