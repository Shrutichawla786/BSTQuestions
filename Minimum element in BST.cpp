link-->https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1
Q.Minimum element in BST

Code-->
  int minValue(Node* root) {
    // Code here
    if(root==NULL){
        return -1;
    }
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1).
