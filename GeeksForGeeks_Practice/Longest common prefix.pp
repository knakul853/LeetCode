brute force

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int m = s2.length();
    int j=0;
    int ans = 0;
    int id = -1;
    for(int i=0;i<m;i++)
    {
        
        int k = i;
        while(k<m && j<n && s1[j]==s2[k]){
            k++;j++;
        }
        if(ans<j)
        {
            ans = j;
            id = i;
        }
        j=0;
    }
    cout<<id<<" "<<s1.substr(0,ans)<<"\n";
}

int main() {
    int t;cin>>t;while(t--)solve();
	//code
	return 0;
}
