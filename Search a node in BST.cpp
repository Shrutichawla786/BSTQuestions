Link--->https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1
Q.Search a node in BST

Code-->bool search(Node* root, int x) {
    // Your code here
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    else if(root->data>x){
        return search(root->left ,x);
    }
    else if(root->data<x){
        return search(root->right , x);
    }
    return false;
}
Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(1)
  
