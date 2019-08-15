/*

filter the cases:
11:42 pm
Thursday, 15 August 2019 (IST)
Time in Bhagta


*/



class Solution {
public:
    int numDecodings(string s) {
        int mod = (int)1e9+7;
        
        int n = s.length();
        if( n==0)return 0;
        
        long long dp[n+1]={0};
        dp[0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            
            char c= s[i-1];
            char pre = '&';
            if(i>1)
            {
                pre = s[i-2];
            }
            
            if(c == '0')
            {
                if(pre>'0' && pre<='2')dp[i] = dp[i-2];
                
                else if(pre =='*')dp[i] = (dp[i-2]*2) % mod;
                else return 0;
            }
            
           else if(c > '0')
            {
                if(pre=='*')
                {
                    if(c <='6')
                    {
                        dp[i] = ( dp[i-1] + 2 * dp[i-2] ) % mod;
                    }
                    else dp[i] = ( dp[i-1] + dp[i-2] ) % mod;
                }
                
                else if(i>1 && pre !='0' &&(( pre-'0' ) * 10 + c-'0') <=26)
                {
                    dp[i] = ( dp[i-1] + dp[i-2] ) % mod;
                }
                else dp[i] = dp[i-1] % mod;
                
            }
            
            else
            {
                dp[i] = ( 9 * dp[i-1] ) % mod;
                
                
                if(pre == '1') // we can only pair 9 ways
                {
                    dp[i]= (dp[i] + dp[i-2] * 9 ) % mod;
                    
                }
                else if(pre == '2')
                {
                    dp[i] = (dp[i] + dp[i-2] * 6) % mod;
                }
                else if(pre == '*')
                {
                    dp[i] = (dp[i] + dp[i-2] * 15) % mod; 
                }
                
            }
            
            
        }
        
        return dp[n];
        
    }
};
