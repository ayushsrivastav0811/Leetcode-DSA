class Solution {
private:
    int solve(int n, vector<int>&dp)
    {
         if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        int one=climbStairs(n-1);
        int two=climbStairs(n-2);
        return dp[n]=one+two;
    }
public:
    
    int climbStairs(int n) {
          vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
