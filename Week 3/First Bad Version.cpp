// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l  = 0, r = n;
        
        while(l<r){
            
            int mid = l + (r-l)/2;
            
            bool b1 = isBadVersion(mid);
            
            if(b1==false)
                l = mid +1;
            else
                r = mid;           
        }
   
        return l; 
    }
};