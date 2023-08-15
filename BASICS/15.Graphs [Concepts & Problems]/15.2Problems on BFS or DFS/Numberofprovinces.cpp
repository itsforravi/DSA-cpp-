#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


// Number of Provinces

// class Solution{
//     private:
//     void dfs(int node ,vector<int> adjLs[],int vis[]){
//      vis[node]=1;
//      for(auto it: adjLs[node]){
//      if(!vis[it]){
//         dfs(it,adjLs,vis);
//      }
//      }
//     }
// public:
// int numProvinces(vector<vector<int>>adj,int V ){
// vector<int>adjLs[V];
// for(int i=0;i<V;i++){
//     for(int j=0;j<V;j++){
//         if(adj[i][j]==1 && i!=j){
//             adjLs[i].push_back(j);
//             adjLs[j].push_back(i);
//         }
//     }
// }
// int vis[V]={0};
// int cnt=0;
// for(int i=0;i<V;i++){
//     if(!vis[i]){
//         cnt++;
//         dfs(i,adjLs,vis);
//     }
// }
// return cnt;

// }

// };


// Number of connected components in Matrix
class Solution{
private:
void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid){
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int n=grid.size();
    int m=grid[0].size();
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
         q.pop();   
         for(int delrow=-1;delrow<=1;delrow++){
            for(int delcol=-1;delcol<=1;delcol++){
                int nrow=row+delrow;
                int ncol=col+delcol;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                 vis[nrow][ncol] =1;
                 q.push({nrow,ncol});  
                }

            }
         } 
    
    }
}

public:
int numIslands(vector<vector<char>>&grid){
    int n=grid.size();
    int m=grid.size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    int cnt=0;
    for(int row=0;row<n;row++){
        for(int col;col<m;col){
            if(!vis[row][col]&& grid[row][col]=='1'){
                cnt++;
                bfs(row,col,vis,grid);
            }
        }
    }
    return cnt;
}

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// // Number of Provinces
// vector<vector<int>> adj
// {
//     {1,0,1},
//     {0,1,0},
//     {1,0,1}
// };
// Solution obj;
// cout<<"The Nuber of Provinces Is -> "<<obj.numProvinces(adj,3);

// Number of connected components in Matrix
//  Solution obj;
//     cout <<obj.numIslands();
 



   return 0;
}
