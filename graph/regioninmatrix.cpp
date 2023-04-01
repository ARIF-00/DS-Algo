int X[] = {0, 0, 1, 1, 1, -1, -1, -1};
int Y[] = {1, -1, 0, 1, -1, 0, 1, -1};
int maxans;

void bfs(int i,int j,vector<vector<bool>> &vis, vector<vector<int>> &A,int maxans){
    if(vis[i][j]==false){
        vis[i][j]=true;
        int ans;
        if(A[i][j]==1)
        ans=1;
        else if(A[i][j]==0)
        ans=0;
        
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int k=0;k<8;k++)  // FOR SEAARCHING ALL THE 8 DISTANCES
                {
                    int newx = x + X[k]; 
                    int newy = y + Y[k];
                    if(newx>=0 && newx<=A.size() && newy>=0 && newy<=A[0].size() && vis[newx][newy]==false )
                    {
                        vis[newx][newy] = 1;
                        if(A[newx][newy]==1){
                            q.push({newx,newy});
                            ans++;
                        }
                    }
                }
        }
        maxans=max(maxans,ans);
    }
} 

int Solution::solve(vector<vector<int> > &A) {
    int r=A.size();
    int c=A[0].size();
    vector<vector<bool>> vis(r+1,vector<bool>(c+1,false));
    maxans=0;
    
    for(int i=0;i<r;i++)
    for(int j=0;j<c;i++){
        bfs(i,j,vis,A,0);
    }
    
    return maxans;
    
}