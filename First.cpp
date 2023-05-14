#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void printName(string name){
    cout<<"Hay "<<name;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string name;
    cin>>name;
printName(name);
 return 0;

}