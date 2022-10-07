class Solution {
    void left(Node * root, vector<int> &ans)
    {
        if(!root )
        return;
         
        if(root->left)
            {
                ans.push_back(root->data);  
                left(root->left,ans);
            }
        else if(root->right)
            {   
                ans.push_back(root->data);  
                left(root->right,ans);
            }
    }
    void right(Node *root, vector<int>&ans)
    {
        if(!root )
        return;
       if(root->right)
            {
                right(root->right,ans);
                ans.push_back(root->data); 
            }
        else if(root->left)
            {
                right(root->left,ans);
                ans.push_back(root->data); 
            }
                
    }
    void leaf(Node *root, vector<int>&ans)
    {
        if(!root)
        return;
        leaf(root->left,ans);
        if(!root->left&&!root->right)
        ans.push_back(root->data);
        leaf(root->right,ans);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        ans.push_back(root->data);
        left(root->left,ans);
        leaf(root->left,ans);
        leaf(root->right, ans);
        right(root->right,ans);
        return ans;
    }
};