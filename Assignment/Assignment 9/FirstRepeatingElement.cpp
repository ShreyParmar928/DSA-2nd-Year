int Solution::solve(vector<int> &A) {
    unordered_map<int,int>umap;
    for(int i=0;i<A.size();i++)
    {
        umap[A[i]]++;
    }
    for(int i=0;i<A.size();i++)
    {
        int key=A[i];
        auto temp=umap.find(key);
        int val=temp->second;
        if(val>1)
        return A[i];
    }
    return -1;
}
