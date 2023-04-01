#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int>&v,vector<int> temp ,int tt,int idx)
{
    if(idx<0 || tt<0) return ;
    else if(idx>=0 && tt==0)
    {
        sort(temp.begin(),temp.end());
        ans.push_back(temp);
        return;
    }

    vector<int> temp1,temp2;
    temp1=temp;//not including
    temp2=temp;//including
    temp2.push_back(v[idx]);
    solve(ans,v,temp1,tt,idx-1);
    solve(ans,v,temp2,tt-v[idx],idx);//same as unbounded knapsack
    return;
}

vector<vector<int> > combinationSum(vector<int> &v, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    sort(v.begin(),v.end());
    solve(ans,v,temp,target,v.size()-1);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    return ans;
}

int main()
{
    vector<int> ar;
    ar.push_back(2);
    ar.push_back(4);
    ar.push_back(6);
    ar.push_back(8);
    int n = ar.size();
 
    int sum = 8; // set value of sum
    vector<vector<int> > res = combinationSum(ar, sum);
 
    // If result is empty, then
    if (res.size() == 0) {
        cout << "Emptyn";
        return 0;
    }
 
    // Print all combinations stored in res.
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
            { cout << res[i][j] << " ";
            }
            cout<<") ";

            
        }
    }
}