int minvbatterycapacity(int n,int m,vector<vector<int>> edges)
{
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<m;i++)
    {
        graph[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        graph[edges[i][1]].push_back({edges[i][0],edges[i][2]});
    }
    int ans =INT_MAX;
    vector<bool> vis(n+1,false);

    function<void(int,int)> dfs = [&](int node,int temp)->void
    {
        if(node == n) return ;

        for(auto child: graph[node])
        {
           
            if(!vis[child.first])
            {
                vis[child.first] = true;
                temp = max(temp,child.second);
                dfs(child.first,temp);
            }
            ans = min(ans,temp);
        }
        return;

    };
    dfs(1,INT_MIN);
    return ans;
}