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
class Solution{
    private:
    void toposort(int node ,vector<pair<int,int>> adj[],int vis[],stack<int> &st)
{
    vis[node]=1;
    for(auto it: adj[node]){
        int v =it.first;
        
        if(!vis[v]){
        toposort(v,adj,vis,st);
        }
    }
    st.push(node);
}
public:
vector<int>shortestPath(int N,int M,vector<vector<int>> & edges){
    vector<pair<int,int>> adj[N];
    for(int i=0;i<M;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int wt=edges[i][2];
        adj[u].push_back({v,wt});

    }
    int vis[N]={
        0
    };
    stack<int> st;
    for(int i=0;i<N;i++){
        if(!vis[i]){
            toposort(i,adj,vis,st);
        }
    }
    vector<int> dist(N);
    for(int i=0;i<N;i++){
        dist[i]=1e9;
    }
    dist[0]=0;
    while(!st.empty()){

int node=st.top();
st.pop();


for(auto it:adj[node]){
    int v=it.first;
    int wt=it.second;
    if(dist[node]+wt<dist[v]){
        dist[v]=wt+dist[node];
    }


}


    }

    for(int i=0;i<N;i++){
        if(dist[i]==1e9) dist[i]=-1;
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
int N=6,M=7;
vector<vector<int>> edges= {{0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}};



Solution obj;
vector<int> ans=obj.shortestPath(N,M,edges);
cout<<"Shortest Path Between Nodes->"<<endl;
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
    return 0;

}