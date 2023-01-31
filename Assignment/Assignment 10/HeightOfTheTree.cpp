
  int height(Node* root) { 
    int left=-1,right=-1;
    if(root->left){
        left=height(root->left);
    }
    if(root->right){
        right=height(root->right);
    }
    return max(left,right)+1;
}
