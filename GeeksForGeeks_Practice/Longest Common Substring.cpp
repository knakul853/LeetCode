brute force

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int ans = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
         int k=i;
         int l=j;
         while(k<n && l<m && s1[k]==s2[l])
         {
             k++;l++;
             
         }
         ans = max(ans , k-i);
         
         
          }
         
    }
    cout<<ans<<"\n";
}

int main() {
	//code
	
	int t;
	cin>> t;
	while(t--)solve();
	return 0;
}


dp optamized solution


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
   int ans = -1;
   int dp[n+1][m+1];
   memset(dp,0,sizeof dp);
   
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=m;j++)
       {
           if(!i ||!j)
           {
               continue;
           }
           if(s1[i-1] == s2[j-1])
           {
               dp[i][j] = dp[i-1][j-1]+1;
           }
           else dp[i][j]=0;
           ans = max(ans , dp[i][j]);
       }
   }
   
   cout<<ans<<"\n";
   
}

int main() {
	//code
	
	int t;
	cin>> t;
	while(t--)solve();
	return 0;
}
