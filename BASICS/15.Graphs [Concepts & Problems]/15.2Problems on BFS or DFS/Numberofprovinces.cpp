#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;


// Number of Provinces

class Solution{
    private:
    void dfs(int node ,vector<int> adjLs[],int vis[]){
     vis[node]=1;
     for(auto it: adjLs[node]){
     if(!vis[it]){
        dfs(it,adjLs,vis);
     }
     }
    }
public:
int numProvinces(vector<vector<int>>adj,int V ){
vector<int>adjLs[V];
for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        if(adj[i][j]==1 && i!=j){
            adjLs[i].push_back(j);
            adjLs[j].push_back(i);
        }
    }
}
int vis[V]={0};
int cnt=0;
for(int i=0;i<V;i++){
    if(!vis[i]){
        cnt++;
        dfs(i,adjLs,vis);
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

// Number of Provinces
vector<vector<int>> adj
{
    {1,0,1},
    {0,1,0},
    {1,0,1}
};
Solution obj;
cout<<"The Nuber of Provinces Is -> "<<obj.numProvinces(adj,3);
    return 0;
}
