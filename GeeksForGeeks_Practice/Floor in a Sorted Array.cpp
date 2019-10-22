#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin >> v[i];
    sort(v.begin() , v.end());
    int l = 0,r = n;
    int ans = -1;
    while(r - l > 1)
    {
        int md = (l + ( r - l)/2);
        if(v[md] <=k)
        {
            ans = md;
            l = md;
        }
        else r = md;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
        cout<<solve()<<"\n";
    }
	//code
	return 0;
}
