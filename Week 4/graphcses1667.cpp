#include <bits/stdc++.h>

using namespace std;


int n,m;

vector<int> v[100001];
bool vis[100001];
int par[100001];
int dist[100001];



void bfs(int source){
	vis[source] = true;
	queue<int> q;
	q.push(source);
     for(auto &c: dist){
     	c = INT_MAX;
     }
     dist[source] = 0;
     memset(par,-1,sizeof par);
	while(!q.empty()){
		int node = q.front();
		q.pop();

		for(auto &c: v[node]){

			if(!vis[c]){
				par[c] = node;
				dist[c] = dist[node] + 1;
				q.push(c);
				vis[c] = true;
			}
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

    	v[a].push_back(b);
    	v[b].push_back(a);

    }

    bfs(0);

    if(!vis[n-1]){
    	cout<<"IMPOSSIBLE"<<endl;
    	return;
    }

    cout<<dist[n-1]+1<<endl;

    int curr=n-1;
    vector<int> path;
    while(curr!=-1){
    	path.push_back(curr);
    	curr = par[curr];
    }

    reverse(path.begin(),path.end());

    for(auto &x: path){
    	cout<<x+1<<" ";
    }
    cout<<endl;

    return;


}



int main(){


      solve();

   return 0;

}
