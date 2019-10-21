#include <bits/stdc++.h>
using namespace std;

string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void recur(vector<int>&digit , string ans,int id)
{
    if(id == digit.size()){
        cout<<ans<<" ";return;
    }
    int num = digit[id];
    for(int i=0;i<keypad[num].length();i++)
    {
        recur(digit , ans+keypad[num][i] , id+1 );
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int>digit(n);
    for(int i=0;i<n;i++)cin>>digit[i];
    
    recur(digit , string(""),0);
    cout<<endl;
    
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
