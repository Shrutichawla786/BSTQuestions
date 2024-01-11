link-->https://www.geeksforgeeks.org/problems/largest-bst/1
Q.Largest BST
  code-->
  class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
    
    
};
info solve(Node * root , int & ans){
    
    if(root==NULL){
        return { INT_MIN, INT_MAX , true , 0};
    }
    info left= solve(root->left , ans);
    info right = solve(root->right , ans);
    info currNode;
    currNode.size= left.size + right.size+1;
    currNode.maxi = max(root->data,  right.maxi);
    currNode.mini= min(root->data ,left.mini);
    if(left.isBST&& right.isBST &&( root->data>left.maxi && root->data <right.mini)){
        currNode.isBST=true;
    }
    else{
        currNode.isBST=false;
    }
    if(currNode.isBST){
        ans=max(ans , currNode.size);
    }
    return currNode;
    
}
class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	//Your code here
    	int maxsize=0;
    	info temp = solve(root , maxsize);
    	return maxsize;
    }
};
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the BST).
