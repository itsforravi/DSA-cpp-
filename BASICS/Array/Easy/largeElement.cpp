#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Largest Element 
int largestElement(vector<int> &arr, int n) {
   int largest=arr[0];
   for(int i=0; i<n; i++){
      while(arr[i] > largest){
         largest=arr[i];
      }
   }
   return largest;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // Largest Element 
    vector<int> arr={3,2,4,52,67,17};
    int n=6;
    int max=largestElement(arr,n);
    cout<<"Largest element in the arr " <<max<<" ";

    return 0;
}