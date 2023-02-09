#include <bits/stdc++.h>

using namespace std;


int n,m;
vector<int> adj[100001];
bool vis[100001];
vector<int> ans;
bool stk[100001];
bool cyc =  false;

void dfs(int node){

    vis[node] = true;
    stk[node] = true;

    for(auto &c: adj[node]){
    	   if(!vis[c]){
    	   	dfs(c);
    	   }
    	   else if(stk[c]){
    	   	cyc = true;
    	   }
    }

    stk[node] = false;
    ans.push_back(node);


}

void solve(){

   cin>>n>>m;

   for(int i=0;i<m;i++){
   	    int a,b;
   	    cin>>a>>b;
   	    --a;
   	    --b;
   	    adj[a].push_back(b);
   }


   memset(vis,false,sizeof vis);


   for(int i=0;i<n;i++){
   	  if(!vis[i]){
   	  	dfs(i);
   	  }
   }


   if(!cyc){
   reverse(ans.begin(),ans.end());

   for(auto &x: ans){
   	  cout<<x+1<<" ";
   }
   }
   else{

   	cout<<"IMPOSSIBLE"<<endl;
   }

}


int main(){

    
    solve();

	return 0;
}