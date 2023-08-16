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
// class Solution{
// private:
// void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid){
//     vis[row][col]=1;
//     queue<pair<int,int>>q;
//     q.push({row,col});
//     int n=grid.size();
//     int m=grid[0].size();
//     while(!q.empty()){
//         int row=q.front().first;
//         int col=q.front().second;
//          q.pop();   
//          for(int delrow=-1;delrow<=1;delrow++){
//             for(int delcol=-1;delcol<=1;delcol++){
//                 int nrow=row+delrow;
//                 int ncol=col+delcol;
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
//                  vis[nrow][ncol] =1;
//                  q.push({nrow,ncol});  
//                 }

//             }
//          } 
    
//     }
// }

// public:
// int numIslands(vector<vector<char>>&grid){
//     int n=grid.size();
//     int m=grid.size();
//     vector<vector<int>> vis(n,vector<int>(m,0));
//     int cnt=0;
//     for(int row=0;row<n;row++){
//         for(int col;col<m;col){
//             if(!vis[row][col]&& grid[row][col]=='1'){
//                 cnt++;
//                 bfs(row,col,vis,grid);
//             }
//         }
//     }
//     return cnt;
// }

// };



// Rotten Oranges : Min time to rot all oranges : BFS
// int orangesRotting(vector<vector<int>> &grid){
//     if(grid.empty()) return 0;
//     int m=grid.size(),n=grid[0].size(),days=0,tot=0,cnt=0;
//     queue<pair<int,int>> rotten;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(grid[i][j]!=0) tot++;
//             if(grid[i][j]==2) rotten.push({i,j});

//         }
//     }
//     int dx[4]={0,0,1,-1};
//     int dy[4]={1,-1,0,0};
//     while(!rotten.empty()){
//         int k=rotten.size();
//         cnt+=k;
//         while(k--){
//             int x=rotten.front().first,y=rotten.front().second;
//             rotten.pop();
//             for(int i=0;i<4;i++){
//                 int nx=x+dx[i],ny=y+dy[i];
//                 if(nx<0 || ny<0 || nx>=m|| ny>=n|| grid[nx][ny]!=1) continue;
//                 grid[nx][ny]=2;
//                 rotten.push({nx,ny});
//             }
//         }
//         if(!rotten.empty()) days++;

//     }
//     return tot==cnt ? days:-1;
// }


// Flood Fill Algorithm – Graphs

// class Solution{
//     private:
//     void dfs(int row,int col,vector<vector<int>> & ans,
//     vector<vector<int>> &image,int newColor,int delRow[],int delCol[],int iniColor){
//         ans[row][col]=newColor;
//         int n=image.size();
//         int m=image[0].size();
//         for(int i=0;i<4;i++){
//             int nrow=row+delRow[i];
//             int ncol=col+delCol[i];
//             if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && image[nrow][ncol]==iniColor&& ans[nrow][ncol]!=newColor){
//                 dfs(nrow,ncol,ans,image,newColor,delRow,delCol,iniColor);
//             }
//         }
//     }
//         public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, 
//     int sr, int sc, int newColor) {
//         // get initial color
//         int iniColor = image[sr][sc]; 
//         vector<vector<int>> ans = image; 
//         // delta row and delta column for neighbours
//         int delRow[] = {-1, 0, +1, 0};
//         int delCol[] = {0, +1, 0, -1}; 
//         dfs(sr, sc, ans, image, newColor, delRow, delCol, iniColor); 
//         return ans; 
//     }

// };



// Detect Cycle in an Undirected Graph (using BFS)


class Solution {
  private: 
  bool detect(int src, vector<int> adj[], int vis[]) {
      vis[src] = 1; 
      // store <source node, parent node>
      queue<pair<int,int>> q; 
      q.push({src, -1}); 
      // traverse until queue is not empty
      while(!q.empty()) {
          int node = q.front().first; 
          int parent = q.front().second; 
          q.pop(); 
          
          // go to all adjacent nodes
          for(auto adjacentNode: adj[node]) {
              // if adjacent node is unvisited
              if(!vis[adjacentNode]) {
                  vis[adjacentNode] = 1; 
                  q.push({adjacentNode, node}); 
              }
              // if adjacent node is visited and is not it's own parent node
              else if(parent != adjacentNode) {
                  // yes it is a cycle
                  return true; 
              }
          }
      }
      // there's no cycle
      return false; 
  }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // initialise them as unvisited 
        int vis[V] = {0};
        for(int i = 0;i<V;i++) {
            if(!vis[i]) {
                if(detect(i, adj, vis)) return true; 
            }
        }
        return false; 
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
//  vector<vector<int>> v{ {2,1,1} , {1,1,0} , {0,1,1} } ;
//  Solution obj;
//         int ans = obj.numIslands(v);
//         cout<<"Number of connected components in Matrix "<<ans<<endl;



// Rotten Oranges : Min time to rot all oranges : BFS
 
// vector<vector<int>> v{{2,1,1},{1,1,0},{0,1,1}};
// int rottening=orangesRotting(v);
// cout<<"Minimum Numbers of Minntes Required : "<<rottening<<endl;


// Flood Fill Algorithm – Graphs
// 	vector<vector<int>>image{
// 	    {1,1,1},
// 	    {1,1,0},
// 	    {1,0,1}
// 	};
	
// // sr = 1, sc = 1, newColor = 2  	
// 	Solution obj;
// 	vector<vector<int>> ans = obj.floodFill(image, 1, 1, 2);
// 	for(auto i: ans){
// 		for(auto j: i)
// 			cout << j << " ";
// 		cout << "\n";
// 	}


// Detect Cycle in an Undirected Graph (using BFS)
  vector<int> adj[4] = {{}, {2}, {1, 3}, {2}};
    Solution obj;
    bool ans = obj.isCycle(4, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";

   return 0;
}
