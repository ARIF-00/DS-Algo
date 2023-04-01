#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
 vector<int> graph[N];




 void bfs(int x,int vis[],int parent){
     queue<int> q;
     q.push(x);
     vis[x]=1;
     while(q.empty()){
         int node=q.front();
         q.pop();
         parent=node;
         cout<<node;
        for(auto nbr:graph[node]){
         if(vis[nbr]!=1){
             q.push(nbr);
             vis[nbr]=1;1q
         }
        
    
     }  
    }
 }
int main(){
    int n,m; //vertices and edges
    cin>>n>>m;
    int vis[n];
    memset(vis,0,n);
    int v1,v2;
    for(int i=0; i<m;i++){
        // int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    
    bfs(v1,vis,-1);

    return 0;

}
