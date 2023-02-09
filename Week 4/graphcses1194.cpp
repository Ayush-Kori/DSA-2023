#include <bits/stdc++.h>

using namespace std;


int n,m;
char a[1001][1001];
bool vis[1001][1001];
int dist[1001][1001];
pair<int,int>  par[1001][1001];
int dist_a[1001][1001];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int si,sj;
int ei=-1,ej=-1;
void solve(){

	  vector<pair<int,int>> v;
  
     for (int i = 0; i < n; ++i)
     {
     	for (int j = 0; j < m; ++j)
     	{
     	      cin>>a[i][j];
     	      if(a[i][j]=='A'){
     	      	si=i;
     	      	sj=j;
     	      }
     	      else if(a[i][j]=='M'){
     	      	v.push_back({i,j});
     	      }
     	}
     }

     //multsource bfs
     queue<pair<int,int>> q;

      for(auto &c: dist){
      	for(auto &d: c){
      		d = INT_MAX;
      	}
      }


      for(auto &c: dist_a){
      	for(auto &d: c){
      		d = INT_MAX;
      	}
      }

     for(auto &c: v){
     	q.push(c);
     	vis[c.first][c.second] = true;
     	dist[c.first][c.second] = 0;  
     }


     while(!q.empty()){

     	pair<int,int>p=q.front();
     	q.pop();

     	for(int k=0;k<4;k++){
     		int ni = p.first + dx[k];
     		int nj = p.second + dy[k];

     		if(ni>=0 and nj>=0 and ni<n and nj<m and !vis[ni][nj] and a[ni][nj]!='#'){
     			q.push({ni,nj});
     			vis[ni][nj] = true;
     			dist[ni][nj] = dist[p.first][p.second] + 1;
     		}
     	}
     }

     // ab khud se bhi distance chahiye
     // normal bfs

     memset(vis,false,sizeof vis);
     memset(par,-1,sizeof par);
     q.push({si,sj});
     dist_a[si][sj] = 0;
     vis[si][sj] = true;
 

     while(!q.empty()){

     	pair<int,int>p=q.front();
     	q.pop();

     	for(int k=0;k<4;k++){
     		int ni = p.first + dx[k];
     		int nj = p.second + dy[k];

     		if(ni>=0 and nj>=0 and ni<n and nj<m and !vis[ni][nj] and a[ni][nj]!='#'){
     			q.push({ni,nj});
     			vis[ni][nj] = true;
     			par[ni][nj] = p;
     			dist_a[ni][nj] = dist_a[p.first][p.second] + 1;
     		}
     	}

     }


     for(int i=0;i<n;i++){
     	for(int j=0;j<m;j++){
     		if(i==0 || j==0 || i==n-1 || j==m-1){
     			if(dist[i][j]>dist_a[i][j]){
     				ei = i;
     				ej = j;
     				break;
     			}
     		}
     	}
     } 

     if(ei==-1){
     	cout<<"NO"<<endl;
     	return;
     }

     pair<int,int> curr = {ei,ej};

     string ans = "";

     while(curr!=pair<int,int>{si,sj}){

           pair<int,int> p = par[curr.first][curr.second];

            if(p.first==curr.first){
            	if(p.second>curr.second){
            		ans += 'L';
            	}
            	else{
            		ans += 'R';
            	}
            }
            else{
            	if(p.first>curr.first){
            		ans += 'U';
            	}
            	else{
            		ans +='D';
            	}
            }

     }


     cout<<"YES"<<endl;
     cout<<ans.length()<<endl;
     reverse(ans.begin(),ans.end());
     for(auto &c:ans){
     	cout<<c<<" ";
     } 

     cout<<endl;



}



int main(){


      solve();

   return 0;

}