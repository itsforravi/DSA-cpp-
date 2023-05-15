#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
//Pass by value
void dosomething(int num){
  cout<<num<<endl;
  num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
 int num=10;
 dosomething(num);
 return 0;

}