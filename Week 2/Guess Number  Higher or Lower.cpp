   int guessNumber(int n) {
        
        int l = 0, r = n;
        
        while(l<=r){
            
            int mid = l + (r-l)/2;
            
            int x = guess(mid);
            
            if(x==1){
                l = mid + 1;
            }
            else if(x==-1){
                r = mid - 1;
            }
            else{
                
                return mid;
                
            }
            
        }
        
        return 0;
        
    }
};