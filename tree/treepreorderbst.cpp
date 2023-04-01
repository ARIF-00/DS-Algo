int check(vector<int> A){
    stack <int> s;
    int r= INT_MIN;
    for(int i=0;i<A.size();i++){
        while(!s.empty() && A[i]>s.top()){
            r=s.top();
            s.pop();
        }
        if(A[i]<r)
        return 0;

        s.push(A[i]);
    }
    return 1;
}

int Solution::solve(vector<int> &A) {
    return check(A);
}