#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cout<<"enter vertices and edges";
    cin>>n>>m;

    int u,v,wt;
    vector <pair<int, int> > adj[n];
    for(int i=0;i<n;i++)
    {   cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }
    int parent[n];
    int key[n];
    bool mset[n];

    for(int i=0;i<n;i++)
    {
        key[i]=INT_MAX;
        mset[i]=false;
        parent[i]=-1;
    }
    key[0]=0;
    parent[0]=-1;

    for(int i=0;i<n-1;i++) //n-1 edges for graph if n vertices are present
    {
        int mini=INT_MAX , k;
        for(int j=0;j<n;j++)
        {  
             if(mset==false && key[j]<mini)
             {
                 mini=key[j];
                 k=j;
             }
        }

        mset[k]=true;
        for(auto it:adj[k])
        {
            int a=it.first;
            int weight=it.second;
            if(mset[a]==false && weight<key[a])
            {
                parent[a]=k;
                key[a]=weight;
            }
        }
    } 
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<parent[i]<<"-->"<<i;
    }
    return 0;


}
