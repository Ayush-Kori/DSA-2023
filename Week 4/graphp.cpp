#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[100001];
bool vis[100001];
int ans = 0;
vector<int> g[100001];
int cnt=0,k=0,ans=0;

void dfs(int node){

   g[n].push_back(node);
   vis[node] = true;
    
	int count = 0;

	set<int> s;

   for(auto &x: adj[node]){

	     if(!vis[x]){
	     	 cnt =0;
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

  memset(vis,false,sizeof vis);

  for(int i=0;i<n;i++){
	  if(!vis[i]){
		  dfs(i);
		  k++
	  }
  }

  for(int i=0;i<k;i++){
        cnt=0;
        for(auto it:g[i]){
            cnt+=adj[it].size();
        }
        ans=max(ans,cnt);
    }
    cout<<ans/2; 
 
}


int main() {
	
     solve();

	return 0;

}