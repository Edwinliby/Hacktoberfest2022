void f(Node *root,map<int,vector<int>> &mp, int diag)
{
    if(!root)
    return;
    
    mp[diag].push_back(root->data);
    
    f(root->left, mp ,diag+1);
    
    f(root->right, mp, diag);
}
vector<int> diagonal(Node *root)
{
   // your code here
   map<int,vector<int>> mp;
   
   f(root,mp,1);
   
   vector<int> ans;
   
   for( auto itr: mp)
   {
       for(auto x :itr.second)
       ans.push_back(x);
   }
   return ans;
}