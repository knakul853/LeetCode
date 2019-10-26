#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    
    for(int i=0;i<n;i++)
    {
        int left=i!=0?v[i-1]:0;
        int right = v[n-1] - v[i];
        if(left == right)
        {
            cout<<i+1<<"\n";return ;
        }
        
    }
    cout<<-1<<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
	//code
	return 0;
}
