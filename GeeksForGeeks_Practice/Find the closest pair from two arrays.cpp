#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define inf (int)1e9

void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    int x;cin >> x;
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    int l = 0,r = m-1;
    int mn =inf;
    int le = 0,re = 0;
    while(l<n && r >= 0)
    {
        int diff = abs(a[l] + b[r] - x);
        if(diff < mn)
        {
            mn = diff;
            le = a[l];
            re = b[r];
        }
        if(a[l] + b[r] > x )r--;
        else l++;
    }
    cout<<le<<" "<<re<<"\n";
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
