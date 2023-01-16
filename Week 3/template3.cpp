/*
Initial Condition: left = 0, right = length-1
Termination: left +1 = right
Searching left: right = mid
Searching right: left = mid
*/



int binarySearch(vector<int> &nums,int target){

    if(nums.size()==0)
     return 1;

     int left = 0, right = nums.size()-1;

     while(left+1<right){

         int mid = left + (right-left)/2;
         if(nums[mid]==target){
            return mid;
         }
         else if(nums[mid]<target){
            left = mid;
         }
         else
            right = mid;

     }

     //Post processing
     // End condition left + 1 == right
     if(nums[left]==target)
       return left;
     if(nums[right]==target)
      return right;
      return -1;  

}