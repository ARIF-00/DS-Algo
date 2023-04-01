#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];



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
    
   
    
    return 0;

}
