int mp[101]={0};
    deque<int>wt;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(!wt.empty() && wt.front() == (i-k))
        {
            ans-=mp[A[wt.front()]]==1?1:0;
           mp[A[wt.front()]]--;
            wt.pop_front();
        }
        
        mp[A[i]]++;
        if(mp[A[i]]==1)ans++;
        wt.push_back(i);
        if(wt.size()==k)
        {
            cout<<ans<<" ";
        }
       
