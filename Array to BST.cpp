Link-->https://www.geeksforgeeks.org/problems/array-to-bst4443/1?page=2&category=Binary%20Search%20Tree&sortBy=submissions
Q.Array to BST.
code-->
  void preorder(vector<int>& nums , vector<int>& v , int l , int r){
    if(l>r){
        return ;
    }
    int mid = (l+r)/2;
    v.push_back(nums[mid]);
    preorder(nums , v , l , mid-1);
    preorder(nums , v , mid+1  ,r);
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>v;
        preorder(nums ,v, 0 , nums.size()-1);
        return v;
    }
Expected Time Complexity: O(n)
Expected Space Complexity: O(n)
