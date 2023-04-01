#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = { 2,3,4,5,6};
    A.erase(A.begin() +0);
    for(int i=0; i<A.size();i++){
    cout<<A[i]<<endl;
    }
    

    return 0;
}