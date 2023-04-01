int dp[1001][1001];
int lps(string& s1, string& s2, int i, int j)
{
    if (i == s1.size() || j == s2.size()) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (s1[i] == s2[j] && i!=j) {
        return dp[i][j] = 1 + lps(s1, s2,i+1 , j+1);
    }
    else {
        return dp[i][j] = max(lps(s1, s2, i+1, j), lps(s1, s2, i, j+1));
    }
}


int Solution::solve(string A) {

    string B= A;
    
    int n=A.size();
    memset(dp, -1, sizeof(dp));
    int x= lps(A,B,0,0);

    if(x>=2)
    return 1;


    return 0;
}

 