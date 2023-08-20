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
// class Solution{
//     public:
//     vector<int>kahan(int V,vector<int> adj[]){
//         int indegree[V]={0};
//         for(int i=0;i<V;i++){
//             for(auto it:adj[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int>q;
//         for(int i=0;i<V;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
//         vector<int> kahan;
//         while (!q.empty())
//         {
//             int node=q.front();
//             q.pop();
//             kahan.push_back(node);
//             for(auto it:adj[node]){
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         return kahan;
        
//     }
// };


// Cycle Detection in Directed Graph using DFS
// class Solution{
//     public:
//     bool isCycle(int V,vector<int> adj[]){
//         int indegree[V]={0};
//         for(int i=0;i<V;i++){
//             for(auto it:adj[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int>q;
//         for(int i=0;i<V;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
//         int cnt=0;
//         while (!q.empty())
//         {
//             int node=q.front();
//             q.pop();
//            cnt++;
//             for(auto it:adj[node]){
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         if(cnt==V) return false;
//         return  true;
        
//     }
// };


// Course Schedule I 
class Solution{
public:
bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
		vector<int> adj[V];
		for (auto it : prerequisites) {
			adj[it.first].push_back(it.second);
		}



		int indegree[V] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);
			// node is in your topo sort
			// so please remove it from the indegree

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}

		if (topo.size() == V) return true;
		return false;


	}
};


// Course Schedule II

// class Solution{
//     public:
// vector<int> findorder(int V,int m,vector<vector<int>> prerequisites){
//     vector<int>adj[V];
//     for(auto it:prerequisites){
//         adj[it[1]].push_back(it[0]);
//     }
//      int indegree[V]={0};
//         for(int i=0;i<V;i++){
//             for(auto it:adj[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int>q;
//         for(int i=0;i<V;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
//         vector<int> kahan;
//         while (!q.empty())
//         {
//             int node=q.front();
//             q.pop();
//             kahan.push_back(node);
//             for(auto it:adj[node]){
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         if(kahan.size()==V) return kahan;
//         return {};
// }
// };






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
// vector<int> adj[6]={{},{},{3},{1},{0,1},{0,2}};
// int V=6;
// Solution obj;
// vector<int> ans=obj.kahan(V,adj);
// cout<<"Kahn’s Algorithm is->"<<endl;
// for(auto it: ans){
//     cout<<it<<" ";
// }
// cout<<endl;



// Cycle Detection in Directed Graph using DFS
// vector<int> adj[5]={{2},{3},{34,5},{2},{}};
// int V=5;
// Solution obj;
// bool ans=obj.isCycle(V,adj);
// cout<<" Cycle Detection in Directed Graph using DFS->"<<endl;
// if(ans){
//     cout<<"True\n";
// }
// else{
//     cout<<"False\n";
// }
// cout<<endl;

/// Course Schedule I 
vector<pair<int, int>> prerequisites;
	int N = 4;
	prerequisites.push_back({1, 0});
	prerequisites.push_back({2, 1});
	prerequisites.push_back({3, 2});

	Solution obj;
	bool ans = obj.isPossible(N, prerequisites);

	if (ans) cout << "YES";
	else cout << "NO";
	cout << endl;

// Course Schedule II
// int N = 4;
// int M=3;
	

// 	vector<vector<int>> prerequisites(3);
// 	prerequisites[0].push_back(0);
// 	prerequisites[0].push_back(1);

// 	prerequisites[1].push_back(1);
// 	prerequisites[1].push_back(2);

// 	prerequisites[2].push_back(2);
// 	prerequisites[2].push_back(3);

// 	Solution obj;
// 	vector<int> ans = obj.findorder(N,M, prerequisites);

// 	for (auto task : ans) {
// 		cout << task << " ";
// 	}
// 	cout << endl;


return 0;
}
