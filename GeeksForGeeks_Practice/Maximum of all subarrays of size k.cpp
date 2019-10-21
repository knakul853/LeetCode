#include <bits/stdc++.h>
using namespace std;

void solve()
{
    deque<int>wd;
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    for(int i=0;i<k;i++)
    {
        while(!wd.empty() && v[i] >= v[wd.back()] )wd.pop_back();
        wd.push_back(i);
        
    }
    
    for(int i=k;i<n;i++)
    {
        cout<<v[wd.front()]<<" ";
        if((!wd.empty() )&& wd.front() <= (i-k))wd.pop_front();
        while((!wd.empty()) && v[i] >= v[wd.back()] )wd.pop_back();
        wd.push_back(i);
        
        
    }
    cout<<v[wd.front()]<<"\n";
}

int main() {
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
