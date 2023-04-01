void dfs(int A,int B, vector<int> &ans,long long i){
    if(i>B)
    return;

    int num =i%10;
    if(i>=A)
    ans.push_back(i);

    if(num ==0)
    dfs(A,B,ans,i*10+1);

    else if(num ==9)
    dfs(A,B,ans,i*10+8);

    else{
        dfs(A,B,ans,i*10+num+1);
        dfs(A,B,ans,i*10+num-1);
    }
}



vector<int> Solution::stepnum(int A, int B) {
    vector<int> ans;

    if(A==0)
    ans.push_back(0);


    for(int i=1;i<=9;i++)
    dfs(A,B,ans,(long long)i);

    sort(ans.begin(),ans.end());
    return ans;
}