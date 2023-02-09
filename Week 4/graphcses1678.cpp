#include<bits/stdc++.h>

using namespace std;


int n,m;
vector<int> v[100001];
bool stk[100001];
bool vis[100001];
int par[100001];

void dfs(int node){

    vis[node] = true;
    stk[node] = true;
    

    for(auto &x: v[node]){

        if(!vis[x]){
            
            par[x] = node;
            dfs(x);
        }
        else if(stk[x]){
            
             int curr_node = node;
             vector<int> ans;
             while(curr_node!=x){
                ans.push_back(curr_node);
                curr_node = par[curr_node];
             }

             ans.push_back(x);
             ans.push_back(node);
             reverse(ans.begin(),ans.end());   
             cout<<ans.size()<<endl;   
             for(auto &y: ans){
                cout<<y+1<<" ";
             }
             
              exit(0);
             
        }

    }

    stk[node] = false;

   



}

void solve(){

    cin>>n>>m;
    for(int i=0;i<m;i++){

        int a,b;
        cin>>a>>b;
        --a;
        --b;

        v[a].push_back(b);

    }

    memset(par,-1,sizeof par);
    
    
    for(int i=0;i<n;i++){
      if(!vis[i])
        dfs(i);
    }


    cout<<"IMPOSSIBLE"<<endl;


}






int main(){

    solve();


    return 0;
}