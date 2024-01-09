Link-->https://www.geeksforgeeks.org/problems/merge-two-bst-s/1
Q.Merge two BST 's
code-->
   void inorder(Node * root , vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left , v);
        v.push_back(root->data);
        inorder(root->right ,v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>v1 ;
       vector<int>v2;
       inorder(root1 , v1);
       inorder(root2 , v2);
       
       int i=0;
       int j=0;
       vector<int>ans;
       while(i<v1.size() && j<v2.size()){
           if(v1[i]==v2[j]){
               ans.push_back(v1[i]);
               ans.push_back(v2[j]);
               i++;
               j++;
           }
           else if(v1[i]<v2[j]){
               ans.push_back(v1[i]);
               i++;
           }
           else{
               ans.push_back(v2[j]);
               j++;
           }
       }
       
       
       while(i<v1.size()){
           ans.push_back(v1[i]);
           i++;
       }
       while(j<v2.size()){
           ans.push_back(v2[j]);
           j++;
       }
       return ans;
    }


Expected Time Complexity: O(M+N) where M and N are the sizes of the two BSTs.
Expected Auxiliary Space: O(Height of BST1 + Height of BST2 + M + N(for storing the answer)).

