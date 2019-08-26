//coin change : easy version :/

class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        int n = coins.size();
        
        vector<int>dp(amt+1 , amt+1);
        dp[0] = 0;
        
        for(int i=1;i<=amt;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(coins[j] > i)continue;
                dp[i] = min(dp[i] , dp[ i - coins[j]] + 1);
            }
        }
        
        return dp[amt]>amt?-1:dp[amt];
        
       
        
    }
};
