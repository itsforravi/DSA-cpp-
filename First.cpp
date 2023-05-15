#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int max(int num1,int num2){
  if(num1>=num2){
    return num1;
  }
  // else return num2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   int num1,num2;
   cin>>num1>>num2;
   int minimum=max(num1,num2);


   cout<< minimum;

 return 0;

}