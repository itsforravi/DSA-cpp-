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

// Dijkstra’s Algorithm -Using Paritiea queue
class solution{
    public:
    vector<int>dijkstra(int v,vector<vector<int>> adj[],int s){
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
         vector<int> dist(v);
         for(int i=0;i<v;i++) dist[i]=1e9;
            dist[s]=0;
            pq.push({0,s});
            while(!pq.empty()){
                int dis=pq.top().first;
                int node=pq.top().second;
                pq.pop();
                for(auto it: adj[node]){
                    int edgeWeight=it[1];
                    int adjNode=it[0];
                    if(dis+edgeWeight<dist[adjNode]){
         dist[adjNode]=dis+edgeWeight;
         pq.push({dist[adjNode],adjNode});
                    }
                }
            }
         return dist;
    }
};


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

// Dijkstra’s Algorithm -Using Paritiea queue
    int V = 3, E = 3, S = 2;
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

    solution obj;
    vector<int> res = obj.dijkstra(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;

}