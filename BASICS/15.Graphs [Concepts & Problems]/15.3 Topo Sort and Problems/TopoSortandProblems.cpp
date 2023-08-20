#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Topological Sort Algorithm 
// class Solution {
// private:
// 	void dfs(int node, int vis[], stack<int> &st,
// 	         vector<int> adj[]) {
// 		vis[node] = 1;
// 		for (auto it : adj[node]) {
// 			if (!vis[it]) dfs(it, vis, st, adj);
// 		}
// 		st.push(node);
// 	}
// public:
	 
// 	vector<int> topoSort(int V, vector<int> adj[])
// 	{
// 		int vis[V] = {0};
// 		stack<int> st;
// 		for (int i = 0; i < V; i++) {
// 			if (!vis[i]) {
// 				dfs(i, vis, st, adj);
// 			}
// 		}

// 		vector<int> ans;
// 		while (!st.empty()) {
// 			ans.push_back(st.top());
// 			st.pop();
// 		}
// 		return ans;
// 	}
// };

// Kahn’s Algorithm | Topological Sort Algorithm | BFS
class Solution{
    public:
    vector<int>kahan(int V,vector<int> adj[]){
        int indegree[V]={0};
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> kahan;
        while (!q.empty())
        {
            int node=q.front();
            q.pop();
            kahan.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return kahan;
        
    }
};







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// Topological Sort Algorithm 
// vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
// 	int V = 6;
// 	Solution obj;
// 	vector<int> ans = obj.topoSort(V, adj);
//    cout<<"Topological Order of the Directed Acyclic Graph->"<<endl;
// 	for (auto node : ans) {
// 		cout << node << " ";
// 	}
// 	cout << endl;


// Kahn’s Algorithm | Topological Sort Algorithm | BFS
vector<int> adj[6]={{},{},{3},{1},{0,1},{0,2}};
int V=6;
Solution obj;
vector<int> ans=obj.kahan(V,adj);
cout<<"Kahn’s Algorithm is->"<<endl;
for(auto it: ans){
    cout<<it<<" ";
}
cout<<endl;

return 0;
}
