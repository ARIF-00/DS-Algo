#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;

int dfs(int curr,int par){
    int height[10005]
    int max1 = 0;
    int max2 = 0;
 
   
    for (auto u : adj[cur]) {
         
        
        if (u == par)
            continue;
 
        
        dfs(u, cur);
 
        height[cur] = max(height[cur], height[u]);
 
        if (height[u] >= max1) {
            max2 = max1;
            max1 = height[u];
        }
        else if (height[u] > max2) {
            max2 = height[u];
        }
    }
 
    height[cur] += 1;
 
    diameter = max(diameter, height[cur]);
    diameter = max(diameter, max1 + max2 + 1);
}
void func(){
    int len =str.size();
    vector<int> graph[10005];
    for(int j=0;j<len;j++)
    {
       
        graph[str[j][0]-'a'].push_back(str[j][2]-'a');
        graph[str[j][2]-'a'].push_back(str[j][0]-'a');

        
    }

    return dfs(str[0][0],-1);
}

int main(){
    string str[20];
    int n=str.size();

}