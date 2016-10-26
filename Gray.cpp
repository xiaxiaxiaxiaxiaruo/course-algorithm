vector<int> Gray_Create(int n){
    vector<int > res;
    res.clear();
    int x= 1<<n ;
    for(int i=0;i<x;i++){
        int a=i^(i>>1);
        res.push_back(a);
    }
    return res;
}
int main(){
    vector<int >ans;
    ans=Gray_Create(4);
    for(int i=0;i<ans.size();i++)
        printf("%x\n",ans[i]);
    return 0;
}
