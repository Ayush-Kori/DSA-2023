#include <bits/stdc++.h>

using namespace std;


void solve(){

	int n,m;
	cin>>n>>m;

	vector<int> v[n];
	int outdeg[n];
	memset(outdeg,0,sizeof outdeg);

	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		--a;
		--b;
		v[a].push_back(b);
		outdeg[b]++;
	}

	queue<int> q;

	for(int i=0;i<n;i++){
		if(outdeg[i]==0)
			q.push(i);
	}


	vector<int> ans;

	while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto &c: v[node]){
        	outdeg[c]--;
        	if(outdeg[c]==0)
        		q.push(c);
        }
	}

	if(ans.size()!=n){
		cout<<"IMPOSSIBLE"<<endl;
	}

	for(auto &c: ans){
		cout<<c+1<<" ";
	}
}


int main(){


    solve();

	return 0;
}