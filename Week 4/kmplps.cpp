#include <bits/stdc++.h>

using namespace std;



int main(){
     string s = "ababab";
     int n = s.length(); 
     int lps[n],len=0,i=1;
     lps[0] = 0;
     while(i<n){
       if(s[len] == s[i]){
       	lps[i] = lps[i-1] + 1;
       	len++;
       	i++;
       }else{
       	if(len == 0){
       		lps[i] = 0;
       		i++;
       	}else{
       		len = lps[len-1];
       	}
       }
     }
     for(int i=0;i<n;i++)
     	cout<<lps[i]<<" ";
	return 0;
}