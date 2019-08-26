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

// simple o(nlogn) solution :/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        vector<int>ans;
       for(int i=0;i<n;i++)
       {
           auto it = std::lower_bound(ans.begin(),ans.end(),nums[i]);
           if(it == ans.end())ans.push_back(nums[i]);
           else *it = nums[i];
       }
        return ans.size();
        
        
        
    }
};
// another style of LIS
vector<int>f(n+1,0),dp(n+1,0);
   int ans=0;
    for(int i=1;i<=n;i++)
    {
        dp[i] = lower_bound(f.begin()+1,f.begin()+1+ans,v[i]) - f.begin();
        ans = max(ans,dp[i]);
        f[dp[i]] = v[i];
    }
 
    cout<<ans<<"\n"


