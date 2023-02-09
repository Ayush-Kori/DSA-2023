#include <bits/stdc++.h>

using namespace std;


int n,m;
vector<int> adj[100001];
bool vis[100001];
void dfs(int node){
    vis[node] = true;
    for(auto &x: adj[node]){
         if(!vis[x]){
         	dfs(x);
         }
    }

}


void solve(){

	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		--a;
		--b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int cnt = 0;
    vector<int> cc;
    for(int i=0;i<n;i++){
    	if(!vis[i]){
    		cnt++;
    		dfs(i);
    		cc.push_back(i);
    	}
    }

    cout<<cnt-1<<endl;
    for(int i=1;i<cc.size();i++){
    	cout<<cc[i]+1<<" "<<cc[i-1]+1<<endl;
    }

}



int main(){


      solve();

   return 0;

}
