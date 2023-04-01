#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int>  pii;

void solve(vector<int> &A, int n , int k)
{
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[A[i]]++;
    }

    priority_queue< pii , vector<pii>, greater<pii>> minh;

    for(auto i:um)
    {
        minh.push({i.second, i.first});
        if(minh.size()>k)
        minh.pop();
    }
    for (int i = 1; i <= k; i++) {
        cout << minh.top().second << " -> "<<minh.top().first<<endl;
        minh.pop();
    }

}

int main()
{
    vector<int> A = { 2,2,2,1,1,3,3,3, 4, 7, 3 };
    int n=A.size();
    int k=3;
    
    solve(A,n,k); 
    

    return 0;
}