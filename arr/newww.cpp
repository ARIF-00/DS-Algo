Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

int sol(vector<int> jumps){
    int s=jumps.size();
    int maxx==0;
    int reach=0;
    int ans=0;
    int i=0;

    while(reach<s){
        maxx=max(maxx,i+jumps[i]);

        if(i==reach){
            ans++;
            reach=maxx;


        }

    }
}
int solve(vector<int> jump,vector<int> &dp,int location){
    if( dp[location]!=INT_MAX){
        return dp[location];
    }
    else{
        for(int i=1;i<=jump[location],i++){
            dp[location]=min(dp[location],1+solve(jump))
        }
    }

}

int dppp(vector<int> jump){
    int n=jump.size();
    vector<int> dp(n+1,INT_MAX);
    return solve( jumps,dp,0);
}

receiver = [2 , 4 , 1 , 5 , 3]
seconds = 6

Second          Has ball      Receiver
1               1             2
2               2.            4
3.              4             5
4               5             3
5               3             1

6 1 2

2 4 1 5 3 

1 2 4 5 3

int solve( vector<int > r, int sec){
    vector<int> ans;
    map<int,int> mp;
    ans.push_back(1);

    while(true){
        int tempx=ans.back();
        int temp=r[tempx-1];
        if(mp[temp]==1) break;

        else{
            ans.push_back(temp);
            mp[temp]=1;
        }

    }








}











