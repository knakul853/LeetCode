#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n , m;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>> a[i];
    cin >> m;
    vector<int>b(m),dp(m,0);
    for(int i=0;i<m;i++)cin>> b[i];
    
    for(int i=0;i<n;i++)
    {
        int cur = 0;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                dp[j] = max(dp[j] , cur+1);
            }
            
            if(a[i] > b[j])
            {
                cur = max(cur , dp[j]);
            }
        }
        
    }
    
    int ans = -1;
    for(int c:dp)ans = max(ans , c);
    cout<<ans<<"\n";
}

int main() {
	//code
	
	
	int t;
	cin >> t;
     while(t--)
     {
         solve();
     }
	return 0;
}
