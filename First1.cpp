#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
//Pass by reference
void dosomething(string s){
 s[0]='k';
 cout<<s<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 string s="Ravi";
 dosomething(s);
 cout<<s<<endl;
 return 0;

}