Link-->https://www.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
Q.Normal BST to Balanced BST
void inorder(Node * root , vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left , v);
        v.push_back(root->data);
        inorder(root->right , v);
    }
    Node * inorderToBalancedBST( vector<int>&v ,int start , int end){
        if(start>end){
            return NULL;
        }
        int mid =(start+end)/2;
        Node *root = new Node(v[mid]);
        root->left = inorderToBalancedBST(v  , start , mid-1);
        root->right=inorderToBalancedBST(v , mid+1 , end);
        return root;
    }
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int>v;
    	inorder(root , v);
    	int start=0;
    	int end=v.size()-1;
    	
    	root=inorderToBalancedBST(v , start , end);
    	return root;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
