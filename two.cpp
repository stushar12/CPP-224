int helper(Node *root, int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=helper(root->left,ans);
	int r=helper(root->right,ans);
	int x=root->data+l+r;
	ans=max(ans,x);

	return x;
}

int largestsumsubtree(Node* root)
{
    int maximumsum=INT_MIN;
    helper(root,maximumsum);
    return maximumsum;
}