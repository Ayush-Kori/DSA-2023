#include<bits/stdc++.h>

using namespace std;


int n,m;
vector<int> adj[node];
int a[i];
int b[i];

void solve(){
     
     cin>>n>>m;
     for(int i=0;i<n;i++){
              cin>>a[i];
     }
     for(int i=0;i<m;i++){
              cin>>b[i];
     }

     for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
            	adj[i].push_back(abs(b[j]-a[i]));
            }
     }

     vector<int> ans;


     for(int i=0;i<n;i++){

     	int mn = INT_MAX:

     	for(auto &c: adj[i]){
     		mn = min(mn,c);
     	}

           ans.push_back(mn);
     }

     int res = 0;
     for(auto &x: ans){
     	res = max(res,x);
     }

     cout<<ans<<endl;

}



int main(){

    

	solve();


	return 0;

}