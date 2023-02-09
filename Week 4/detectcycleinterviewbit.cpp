

vector<int> adj[100001];
bool vis[100001];



 bool dfs(int node,vector<int> &stk){
        
        vis[node] = true;
        stk[node] = 1;
        
        for(auto &x: adj[node]){
            
            if(!vis[x]){
                // par[x] = node;
                bool z = dfs(x,stk);
              if(z)
               return true;
            }
            else if(stk[x]!=-1){
                return true;
            }
        }
        
        stk[node] = -1;
        
        return false;
        
    }


int Solution::solve(int A, vector<vector<int> > &B) {
    
    
    
     
      for(int i=0;i<B.size();i++){
          
          int a  = B[i][0];
          int b = B[i][1];
          
          --a;
          --b;
          
          adj[a].push_back(b);
          
      }
      
      
      memset(vis,false,sizeof vis);
      vector<int> stk(A,-1);
      
      for(int i=0;i<A;i++){
          if(!vis[i]){
             bool y =  dfs(i,stk);
             if(y)
             return 1;
          }
      }
      
      return 0;
      
      
     
}