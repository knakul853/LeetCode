#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;cin>>s;
    int n = s.length();
    int dp[n+1][n+1];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=0;
    int st= 0;
    int max_len = 1;
    for(int i=0;i<n;i++)
    dp[i][i]=1;
    
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
         {
             dp[i][i+1]=1;
             if(max_len<2){
             max_len = 2;
             st = i;
             }
         }
    }
    
    for(int length=3;length<=n;length++)
    {
        for(int i=0;i<n-length+1;i++)
        {
            int j = i+length-1;
            if(dp[i+1][j-1] && s[i]==s[j])
            {
                dp[i][j]=1;
                if(max_len<length)
                {
                    max_len = length;
                    st = i;
                }
            }
        }
    }
   // cout<<max_len<<"\n";
    
    cout<<s.substr(st , max_len)<<"\n";
    
}

int main() {
	//code
	int t;cin>> t;
	while(t--)solve();
	return 0;
}
