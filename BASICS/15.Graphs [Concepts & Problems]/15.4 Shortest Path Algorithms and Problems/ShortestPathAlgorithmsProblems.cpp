#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Shortest Path in Undirected Graph with unit distance
// class Solution{
//     public:
//     vector<int>shortestPath(vector<vector<int>>& edges,int N,int M,int src){
//         vector<int> adj[N];
//         for(auto it:edges){
//             adj[it[0]].push_back(it[1]);
//             adj[it[1]].push_back(it[0]);
//         }
//         int dist[N];
//         for(int i=0;i<N;i++){
//             dist[i]=1e9;
//         }
//         dist[src]=0;
//         queue<int>q;
//         q.push(src);
//         while(!q.empty()){
//             int node =q.front();
//             q.pop();
//             for(auto it :adj[node]){
//                 if(dist[node]+1<dist[it]){
//                     dist[it]=1+dist[node];
//                     q.push(it);
//                 }
//             }
//         }
//         vector<int> ans(N,-1);
//         for(int i=0;i<N;i++){
//             if(dist[i]!=1e9){
//                 ans[i]=dist[i];
//             }
//         }
//         return ans;
//     }
// };


// Shortest Path in Directed Acyclic Graph Topological Sort
// class Solution{
//     private:
//     void toposort(int node ,vector<pair<int,int>> adj[],int vis[],stack<int> &st)
// {
//     vis[node]=1;
//     for(auto it: adj[node]){
//         int v =it.first;
        
//         if(!vis[v]){
//         toposort(v,adj,vis,st);
//         }
//     }
//     st.push(node);
// }
// public:
// vector<int>shortestPath(int N,int M,vector<vector<int>> & edges){
//     vector<pair<int,int>> adj[N];
//     for(int i=0;i<M;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         int wt=edges[i][2];
//         adj[u].push_back({v,wt});

//     }
//     int vis[N]={
//         0
//     };
//     stack<int> st;
//     for(int i=0;i<N;i++){
//         if(!vis[i]){
//             toposort(i,adj,vis,st);
//         }
//     }
//     vector<int> dist(N);
//     for(int i=0;i<N;i++){
//         dist[i]=1e9;
//     }
//     dist[0]=0;
//     while(!st.empty()){

// int node=st.top();
// st.pop();


// for(auto it:adj[node]){
//     int v=it.first;
//     int wt=it.second;
//     if(dist[node]+wt<dist[v]){
//         dist[v]=wt+dist[node];
//     }


// }


//     }

//     for(int i=0;i<N;i++){
//         if(dist[i]==1e9) dist[i]=-1;
//     }
//     return dist;
// }
// };

// Shortest Path in Weighted undirected graph
// class Solution{
//     public:
//     vector<int> shortestPath(int n,int m,vector<vector<int,int>>&edges){
//        vector<pair<int ,int>>adj[n+1];
//         for(auto it: edges){
//             adj[it[0]].push_back({it[1],it[2]});
//             adj[it[1]].push_back({it[0],it[2]});
//         }
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         vector<int>dist(n+1,1e9),parent(n+1);
//         for(int i=1;i<=n;i++) parent[i]=i;
//         dist[1]=0;
//         pq.push({0,1});
//         while(!pq.empty()){
//             auto it=pq.top();
//             int node=it.second;
//             int dis= it.first;
//             pq.pop();
//             for(auto it:adj[node]){
//      int adjNode=it.first;
//      int edm=it.second;
    
//      if(dis+edm<dist[adjNode]){
//         dist[adjNode]=dis+edm;
//         pq.push({dis+edm,adjNode});
//         parent[adjNode]=node;
//      }
//             }

//         }
//         if(dist[n]==1e9) return {-1};
//         vector<int> path;
//         int node=n;
//         while(parent[node]!=node){
//             path.push_back(node);
//             node=parent[node];
//         }
//         path.push_back(1);
//         reverse(path.begin(),path.end());
//         return path;
//     }
// };

// Dijkstra’s Algorithm -Using Parities queue
// class solution{
//     public:
//     vector<int>dijkstra(int v,vector<vector<int>> adj[],int s){
//          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//          vector<int> dist(v);
//          for(int i=0;i<v;i++) dist[i]=1e9;
//             dist[s]=0;
//             pq.push({0,s});
//             while(!pq.empty()){
//                 int dis=pq.top().first;
//                 int node=pq.top().second;
//                 pq.pop();
//                 for(auto it: adj[node]){
//                     int edgeWeight=it[1];
//                     int adjNode=it[0];
//                     if(dis+edgeWeight<dist[adjNode]){
//          dist[adjNode]=dis+edgeWeight;
//          pq.push({dist[adjNode],adjNode});
//                     }
//                 }
//             }
//          return dist;
//     }
// };

// Dijkstra’s Algorithm -Using set
class Solution
{
	public:
	  
    vector <int> dijkstra1(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int,int>> st; 

        vector<int> dist(V, 1e9); 
        
        st.insert({0, S}); 
        dist[S] = 0;
        
        while(!st.empty()) {
            auto it = *(st.begin()); 
            int node = it.second; 
            int dis = it.first; 
            st.erase(it); 
            
            for(auto it : adj[node]) {
                int adjNode = it[0]; 
                int edgW = it[1]; 
                
                if(dis + edgW < dist[adjNode]) {
                 
                    if(dist[adjNode] != 1e9) 
                        st.erase({dist[adjNode], adjNode}); 
                     
                    dist[adjNode] = dis + edgW; 
                    st.insert({dist[adjNode], adjNode}); 
                 }
            }
        }
        return dist; 
    }
};


// Shortest Distance in a Binary Maze
// class solution{
//     public:
//     int sortestPath(vector<vector<int>> &grid,pair<int,int>source,
//     pair<int,int>destination){
// if(source.first==destination.first&& source.second==destination.second) return 0;

// queue<pair<int,pair<int,int>>> q;
// int n=grid.size();
// int m=grid[0].size();
// vector<vector<int>> dist(n,vector<int>(m,1e9));
// dist[source.first][source.second]=0;
// q.push({0,{source.first,source.second}});

// int dr[]={-1,0,1,0};
// int dc[]={0,1,0,-1};

// while(!q.empty()){
//     auto it=q.front();
//     q.pop();
//     int dis=it.first;
//     int r=it.second.first;
//     int c=it.second.second;
//     for(int i=0;i<4;i++){
//         int newr=r+dr[i];
//         int newc=c+dc[i];
//         if(newr>=0 && newr<n && newc>=0 && newc<m 
//         && grid[newr][newc] ==1 && dis+1<dist[newr][newc]){
//             dist[newr][newc]=1+dis;

//             if(newr==destination.first &&
//             newc==destination.second) return dis+1;
//             q.push({1+dis,{newr,newc}});
//         }
//     }
// }

// return -1;


//     }
// };



// Path With Minimum Effort
// class solution{
//     public:
//     int minimunEffort(vector<vector<int>>& heights){
      
//         priority_queue<pair<int, pair<int, int>>,
//                        vector<pair<int, pair<int, int>>>,
//                        greater<pair<int, pair<int, int>>>>
//             pq;

//         int n = heights.size();
//         int m = heights[0].size();

//         vector<vector<int>> dist(n, vector<int>(m, 1e9));
//         dist[0][0] = 0;
//         pq.push({0, {0, 0}});

//         int dr[] = {-1, 0, 1, 0};
//         int dc[] = {0, 1, 0, -1};

//         while (!pq.empty())
//         {
//             auto it = pq.top();
//             pq.pop();
//             int diff = it.first;
//             int row = it.second.first;
//             int col = it.second.second;

         
//             if (row == n - 1 && col == m - 1)
//                 return diff;
           
//             for (int i = 0; i < 4; i++)
//             {
//                 int newr = row + dr[i];
//                 int newc = col + dc[i];

//                 if (newr >= 0 && newc >= 0 && newr < n && newc < m)
//                 {
                    
//                     int newEffort = max (abs(heights[row][col] - heights[newr][newc]), diff);

//                     if (newEffort < dist[newr][newc])
//                     {
//                         dist[newr][newc] = newEffort;
//                         pq.push({newEffort, {newr, newc}});
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
// Shortest Path in Undirected Graph with unit distance
// int N=9,M=10;
// vector<vector<int>> edges={
// {0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}
// };
// Solution obj;
// vector<int> ans=obj.shortestPath(edges,N,M,0);
// cout<<"Shortest Path Between Nodes->"<<endl;
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }

// Shortest Path in Directed Acyclic Graph Topological Sort
// int N=6,M=7;
// vector<vector<int>> edges={
//     {0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}
//     };



// Solution obj;
// vector<int> ans=obj.shortestPath(N,M,edges);
// cout<<"Shortest Path Between Nodes->"<<endl;
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }


// Shortest Path in Weighted undirected graph
// int N=6,M=7;
// vector<vector<int>> edges={
//     {0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}
//     };



// Solution obj;
// vector<int> ans=obj.shortestPath(N,M,edges);
// cout<<"Shortest Path Between Nodes->"<<endl;
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }

// Dijkstra’s Algorithm -Using Parities queue
    // int V = 3, E = 3, S = 2;
    // vector<vector<int>> adj[V];
    // vector<vector<int>> edges;
    // vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    // int i = 0;
    // adj[0].push_back(v1);
    // adj[0].push_back(v2);
    // adj[1].push_back(v3);
    // adj[1].push_back(v4);
    // adj[2].push_back(v5);
    // adj[2].push_back(v6);

    // solution obj;
    // vector<int> res = obj.dijkstra(V, adj, S);

    // for (int i = 0; i < V; i++)
    // {
    //     cout << res[i] << " ";
    // }
    // cout << endl;



// Dijkstra’s Algorithm -Using set
   int V = 4, E = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.dijkstra1(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;


// Shortest Distance in a Binary Maze
// pair<int,int> source,destination;
// source.first=0;
// source.second=1;
// destination.first=2;
// destination.second=2;
// vector<vector<int>> grid={
//     {1,1,1,0},
//     {1,1,0,1},
//     {1,1,1,1},
//     {1,1,0,0},
//     {1,0,0,1},
// };
// solution obj;
// int res=obj.sortestPath(grid,source,destination);
// cout<<res;
// cout<<endl;

// Path With Minimum Effort
// vector<vector<int>> heights = {{1, 1,1}, {3, 8, 2}, {5, 3, 5}};

//     solution obj;

//     int ans = obj.minimunEffort(heights);

//     cout << ans;
//     cout << endl;
    return 0;

}