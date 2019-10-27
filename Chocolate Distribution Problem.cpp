#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int m;
    cin >> m;
    int ans = INT_MAX;
    for(int i=0;i<=(n-m);i++)
    {
        //cout<<i<<" ";
        ans = min(ans , v[i+m-1]-v[i]);
    }
    //cout<<endl;
    cout<<ans<<"\n";
}


int main() {
	//code
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
