#include <bits/stdc++.h>

using namespace std;


int n,m;
vector<int> adj[100001];
bool vis[100001];
int par[100001];

void dfs(int node){

	vis[node] = true;

	for(auto &x: adj[node]){
		if(!vis[x]){
			par[x] = node;
			dfs(x);
		}
		else if(x!=par[node]){
			int curr_node = node;
			vector<int> ans;
			while(curr_node!=x){
				ans.push_back(curr_node);
				curr_node = par[curr_node];
			}
			ans.push_back(x);
			ans.push_back(node);

			cout<<ans.size()<<endl;
            for(auto &c: ans){
            	cout<<c+1<<" ";
            }
            cout<<endl;
            exit(0);
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


   memset(par,-1,sizeof par);
   for(int i=0;i<n;i++){
   	if(!vis[i]){
   		dfs(i);
   	}
   }

   cout<<"IMPOSSIBLE"<<endl;

}



int main(){


      solve();

   return 0;

}
