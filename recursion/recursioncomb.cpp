#include <bits/stdc++.h>
using namespace std;

void comb(int k, vector<vector<int> > &v, vector<int> v1,vector<int> &temp,int idx)
{   
    if(idx>v1.size()) return ;
    else if(k==0)
    {
      
        v.push_back(temp);
        return;
    }
    
    vector<int> temp1,temp2;

    temp1=temp;//not including
    temp2=temp;//including
    temp2.push_back(v1[idx]);
    comb(k,v,v1,temp1,idx+1);
    comb(k-1,v,v1,temp2,idx+1);
    
}

vector<vector<int> > combine(int A , int B) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > v;
    vector<int> v1;
    vector<int> temp;
    
   
    for(long long i=1;i<=A;i++)
    v1.push_back(i);
    comb(B,v, v1,temp,0);
    
    
    return v;
}
int main()
{
   
 
    int sum = 8; // set value of sum
    vector<vector<int> > res = combine(4, 2);
 
 
    // Print all combinations stored in res.
    for (int i = 0; i < res.size(); i++) {
        if (res[i].size() > 0) {
            cout << " ( ";
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << ")";
        }
    }
}