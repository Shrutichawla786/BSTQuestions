Link-->https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
Q.Lowest Common Ancestor in a BST
Code-->
  Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            if(root==NULL){
                return NULL;
            }
            if(root->data<n1 && root->data<n2){
                return LCA(root->right  , n1 , n2);
            }
            else if(root->data >n1 && root->data>n2){
                return LCA(root->left , n1  , n2);
            }
            return root;
        }
Expected Time Complexity: O(Height of the BST).
Expected Auxiliary Space: O(Height of the BST).
