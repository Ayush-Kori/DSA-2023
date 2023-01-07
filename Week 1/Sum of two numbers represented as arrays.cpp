	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    
	int i = a.size()-1;
	int j = b.size()-1;
	int carry = 0;
	vector<int> ans;
	int sum;
	
	while(i>=0 and j>=0){
	    sum = a[i] + b[j] + carry;
	    carry = sum/10;
	    sum = sum %10;
	    ans.push_back(sum);
	    i--;
	    j--;
	}
	
	while(i>=0){
	    
	    sum = a[i] + carry;
	    carry = sum/10;
	    sum = sum%10;
	    ans.push_back(sum);
	    i--;
	}
	
	
		while(j>=0){
	    
	    sum = b[j] + carry;
	    carry = sum/10;
	    sum = sum%10;
	    ans.push_back(sum);
	    j--;
	}
	
	
	while(carry!=0){
	        sum = carry;
	        carry = carry/10;
	        sum = sum%10;
	        ans.push_back(sum);
	    }
	    
	    
	reverse(ans.begin(),ans.end());
	
	
	return ans;
	
	
	
	    
	    