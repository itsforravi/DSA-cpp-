#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
//Pass by reference
void dosomething(int arr[] ,int n){
    arr[0]+=10;
    cout<<"Out side of the main=>> "<<arr[0]<<endl;
 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

 int n=5;
  int arr[n];
 for(int i=0;i<=4;i=i+1){
    cin>>arr[i];
   
 }
dosomething(arr,n);
cout<<"Print inside main function=>> "<<arr[0]<<endl;


}