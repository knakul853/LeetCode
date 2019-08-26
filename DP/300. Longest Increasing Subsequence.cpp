// simple o(n^2) solution :/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        
        vector<int>dp(n+1,1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i] > nums[j] && dp[j]+1 > dp[i])
                {
                    dp[i] = dp[j]+1;
                }
            }
        }
        
        return *max_element(dp.begin(),dp.end());
        
        
    }
};

// o(nlogn) solution
