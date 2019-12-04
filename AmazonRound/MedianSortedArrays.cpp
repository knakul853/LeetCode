class Solution {
public:
    int inf = INT_MAX;
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        
        int n = A.size();
        int m =B.size();
        
        if(n < m)return findMedianSortedArrays(B,A);
        
        int lo = 0 , hi = 2* m;
        
        while(lo <= hi) 
        {
            int m2 = ( lo + hi ) >> 1;
            int m1 = ( n + m ) - m2;
            
            double l1 = (m1 == 0) ?INT_MIN : A[(m1-1)/2];
            double l2 = (m2 == 0) ? INT_MIN : B[(m2-1)/2];
            
            double r1 = (m1 == 2*n) ?INT_MAX : A[(m1)/2];
            double r2 = (m2 == 2*m) ?INT_MAX : B[(m2)/2];
            
            if(l1 > r2 ) lo = m2 + 1;
            else if (l2 > r1) hi =m2 - 1;
            else return (max(l1 , l2) + min(r1 , r2))/2.0;
            
        }
        
        return -1;
        
    }
};
