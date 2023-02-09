#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<int> adj[100001];
bool vis[100001];
int col[100001];
bool bi=true;

void dfs(int node){
	vis[node] = true;
	for(auto &x: adj[node]){
		if(!vis[x]){
			col[x] = 1-col[node];
			dfs(x);
		}
		else if(col[x]==col[node]){
               bi = false;
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

        memset(col,-1,sizeof col);

     for(int i=0;i<n;i++){
     	if(!vis[i]){
     		col[i] = 0;
     		dfs(i);
     	}
     }


     if(bi){
     	for(int i=0;i<n;i++){
     		cout<<col[i]+1<<" ";
     	}
     }
     else{
     	cout<<"IMPOSSIBLE"<<endl;
     }
}



int main(){

      solve();

}