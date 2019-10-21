#include <iostream>
using namespace std;

struct trie{
    
  trie * ptr[26];
  bool isleaf;
  
  trie(){
      for(int i=0;i<26;i++)ptr[i] = NULL;
      isleaf = false;
  }
  
};

void insert(trie * root , string &s)
{
    trie*curr = root;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        int id = s[i]-'a';
        if(curr->ptr[id]==NULL)curr->ptr[id] = new trie();
        curr = curr->ptr[id];
    }
    
    curr->isleaf = true;
}

int find_position(trie*root)
{
    trie*cur = root;
    int cnt = 0;
    int pos = 0;
    for(int i=0;i<26;i++)
    {
        if(cur->ptr[i])
        {
            if(cnt>=1)return 0;
            pos = i+1;
            cnt++;
        }
    }
    return pos;
}

string pre(trie*root)
{
    trie*cur = root;
    string ans="";
    int i=0;
    while((cur->isleaf==false ))
    {
        i=find_position(cur);
        if(i==0)break;
        ans+=char('a'+i-1);
        cur = cur->ptr[i-1];
    }
    if(ans=="")return "-1";
    return ans;
    
}


void solve()
{
    trie* root = new trie();
	    int n;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin >> s;
	        insert(root,s);
	    }
	    
	    cout<<pre(root)<<"\n";
}


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
