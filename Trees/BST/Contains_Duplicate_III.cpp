/*
Idea : Use sliding window with multiset or hasmap

*/

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        
      if( nums.size()<2 || k==0)return false; 
        
        deque<int>dq;
        multiset<long>mst;
        int n = (long)nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(mst.size() > k)
            {
                mst.erase(mst.find(dq.front()));
                dq.pop_front();
            }
            
        auto it = mst.lower_bound(long(nums[i] - long(t)));
            if(it==mst.end() || *it > (long)t + nums[i])
            {
                mst.insert(nums[i]);
                dq.push_back(nums[i]);
                
            }
            else
                return true;
        }
        
        return false;
       
        
    }
