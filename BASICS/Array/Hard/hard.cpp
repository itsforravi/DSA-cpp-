#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Program to generate Pascal’s Triangle
// Type : 1
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

int pascalTriangle(int r ,int c){
    int element=nCr(r,c);
    return element;
}


// Type : 2

int nCr1(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

void pascalTriangle1(int n){
    for(int c=1;c<=n; c++){
        cout<<nCr1(n-1,c-1)<<" ";
    }
    cout<<" ";
}


// Type : 3
int nCr2(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return  (int)res;
}

vector<vector<int>> pascalTriangle2(int n) {

    vector<vector<int>> ans;
    for(int row=1;row<=n;row++){
        vector<int> templist;
        for(int col=1;col<=row;col++){
            templist.push_back(nCr2(row-1,col-1));
        }
        ans.push_back(templist);


    }
    return ans;
    }






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Type :1
    // int r=5;
    // int c=3;
    // int element =pascalTriangle(r,c);
    // cout<<"Pascal Triangle (r,c) is => " << element<< " ";
    

    // Type :2
    // int n=6;
    // cout<<"Pascal Tringle row number "<<n<<endl;
    // pascalTriangle1(n);
    
// Type :3
int n;
cin>>n;
vector<vector<int>> ans=pascalTriangle2(n);
for(auto it:ans){
    for(auto ele : it){
        cout<<ele<<" ";

    }

    cout<<endl;
}

    return 0;
}