#include <bits/stdc++.h>
using namespace std;


int solve(int A) {
    
    const long long mod = 1e9 + 7;

    vector<long long> facts(A + 1, 1);
    for(int i = 2; i < A + 1; i++)
        facts[i] = (i * facts[i - 1])%mod;
    

    function<long long(long long , long long)> binpow = [&](long long b, long long p) -> long long {
        if(p == 0)
            return 1;
        else if(p == 1)
            return b % mod;
        else {
            long long mid = binpow(b, p / 2);
            mid = (mid * mid) % mod;
            if(p&1)
                mid = (mid * b) % mod;
            return mid;
        }
    };

    function<long long(long long)> inv = [&](long long b) -> long long {
        return binpow(b, mod - 2);
    };

    function<long long(long long, long long)> nCr = [&](long long n, long long r) -> long long {
        if(n < 0 || r < 0 || r > n)
            return 0;
        long long num = facts[n];
        long long den = (facts[r] * facts[n - r]) % mod;
        den = inv(den);
        return (num * den) % mod;
    };

    vector<long long> cnt(A, 0);

    function<long long(int)> dfs = [&](int cur) -> long long {
        if(2 * cur + 2 >= A) { 
            // at most one child
            if(cur < A)
                cnt[cur]++;
            if(2 * cur + 1 < A)
                cnt[2 * cur + 1]++, cnt[cur]++;
            return 1;
        } else {
            // 2 children
            long long left = dfs(2 * cur + 1);
            long long right = dfs(2 * cur + 2);
            cnt[cur] += cnt[2 * cur + 1];
            cnt[cur] += cnt[2 * cur + 2];

            // 3C2
            long long res = nCr(cnt[cur], cnt[2 * cur + 1]);
            res = (res * left) % mod;
            res = (res * right) % mod;

            cnt[cur]++;
            
            return res;
        }
    };
    
    return dfs(0);
}
int main()
{
    int n = 4;
    int x=solve(n);
    cout<<x;
    return 0;
}
