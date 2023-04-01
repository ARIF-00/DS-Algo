#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;

/*
RECURSION METHOD
int binexp(int a,int b){
    if(b==0)
    return 1;

    long long res=binexp(a,b/2);

    if(b&1) //odd
    return (a*((res*res)%mod))%mod;
    else
    return (res*res)%mod; 

}
*/

//ITERATIVE METHOD
int binexp(int a,int b)
{
    int ans=1;
    while(b){
        if(b&1)
        ans=(ans*1LL*a)%mod;

        a=(a*1LL*a)%mod;
        b>>=1;
    }
    return ans;
}




int main()
{
    
    cout<<binexp(7,13);
    return 0;
}