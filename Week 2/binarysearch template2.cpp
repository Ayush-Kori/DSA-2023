/*
Distinguish Syntax
initial condition: left = 0,right = length
termination: left ==right
searching left: right = mid
searching right: left = mid +1;
*/


int binarySearch(vector<int> &nums,int target){

     if(nums.size()==0)
      return -1;

      int left =0, right =nums.size()-1;

      while(left<right){

        int mid = left + (right-left)/2;
         
         if(nums[mid]==target)
          return mid;
         else if(nums[mid]<target)
           left = mid +1;
         else 
           right = mid;   

      }

      //Ab yahan pe hogi post processing
       if(left!=nums.size() and nums[left]==target)
        return left;
        return -1;

}