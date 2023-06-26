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





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int r=5;
    int c=3;
    int element =pascalTriangle(r,c);
    cout<<"Pascal Triangle (r,c) is => " << element<< " ";
    


    return 0;
}