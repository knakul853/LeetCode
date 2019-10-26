#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sm;
    cin >> n>>sm;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int x;cin >> x;
        v[i] =x;
    }
    int l = 0;
    int cur_sum = v[0];
    for(int i=1;i<=n;i++)
    {
         while(cur_sum > sm && l<i-1)
         {
             cur_sum-=v[l];l++;
         }
         
         if(cur_sum == sm)
         {
             cout<<l+1<<" "<<i<<"\n";
             return;
         }
         if(i<n)cur_sum+=v[i];
         
       
         
    }
    cout<<-1<<"\n";
    return;
   
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
