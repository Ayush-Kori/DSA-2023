#include <bits/stdc++.h>

using namespace std;


void solve(){

    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n-1;i++){
    	int sz;
    	cin>>sz;
    	for(int j=0;j<sz;j++){
    		int node;
    		cin>>node;
    		--node;
    		v[i].push_back(node);
    	}

    	sort(v[i].begin(),v[i].end());
    }

    int par[n];
    memset(par,-1,sizeof par);
    bool vis[n];
    memset(vis,false,sizeof vis);

    queue<int> q;
    q.push(0);
    vis[0] =true;
    while(!q.empty()){
    	int node = 	q.front();
    	q.pop();
    	for(auto &c: v[node]){
    		if(!vis[c]){
    			q.push(c);
    			vis[c] = true;
    			par[c] = node;
    		}
    	}
    }

    if(vis[n-1]){
    	int curr =n-1;
    	vector<int> ans;
    	while(curr!=0){
    		curr = par[curr];
    		ans.push_back(curr);
    	}
    	reverse(ans.begin(),ans.end());
    	cout<<ans.size()<<endl;
    	for(auto &c: ans){
    		cout<<c+1<<" ";
    	}
    	cout<<endl;

    }
    else{
    	cout<<-1<<endl;
    }

}


int main(){


      int t;
      cin>>t;


    while(t--){
    solve();
     }

	return 0;
}