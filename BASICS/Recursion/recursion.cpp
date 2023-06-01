#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
// int cnt=0;
// void print(){
// if(cnt==30) return ;
// cout<<cnt <<endl;
// cnt++;
// print();
// }
// // Name Print to N times
// void name(int i ,int n){
//     if(i>n) return;
//     cout<< "Ravi" <<endl;
//     name(i+1,n);
// }
// // Print lineraly from 1 to N
// void fun(int i ,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     fun(i+1,n);
// }
// // Print lineraly from N to 1
// void fun1(int i ,int n){
//     if(i<1) return;
//     cout<<i<<endl;
//     fun1(i-1,n);
// }
// // // Print lineraly from 1 to N but by backtracking
// void fun2(int i ,int n){
//     if(i<1) return;
    
//     fun2(i-1,n);
//     cout<<i<<endl;
// }
// // // Print lineraly from N to 1 but by backtracking
// void fun3(int i ,int n){
//     if(i>n) return;
    
//     fun3(i+1,n);
//     cout<<i<<endl;
    
// }
// //  Sum of first N numbers 
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int fact(int n){
//     if(n==1) return 1;
//     return n*fact(n-1);
// }
// void fun(int i,int arr[],int n){
//     if(i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     fun(i+1,arr,n);
// }

// bool func(int i,string &s){
//      if(i>=s.size()/2) return true;
//      if(s[i]!=s[s.size()-i-1]) return false;
//      return func(i+1,s);
// }

// // Multiple Recursion(Fabinacci Series)
// int fabi(int n){
//     if(n<=1) return n;
//     int last=fabi(n-1);
//     int slast=fabi(n-2);
//     return last+slast;
// }

// // Subsequence 
// void printF(int ind, vector<int> &ds,int arr[], int n){
//     if(ind==n){
//         for(auto it:ds){
//             cout<<it<<" ";
//         }
//         if(ds.size()==0){
//             cout<<"{}";
//         }
//         cout<<endl;
//         return;
//     } 
//     ds.push_back(arr[ind]);
//     printF(ind+1,ds,arr,n);
//     ds.pop_back();
//     printF(ind+1,ds,arr,n);
// }
// // Print subsequence whose sum is k
// void printSub(int ind,vector<int> &ds,int s,int arr[],int sum,int n){
//  if(ind==n){
//     if(s==sum) {
//         for(auto it:ds)cout<<it<<" ";
//         cout<<endl;
//     }
//     return;
//  }
//  ds.push_back(arr[ind]);
//  s+=arr[ind];
// printSub(ind+1,ds,s,arr,sum,n);
//  s-=arr[ind];
//  ds.pop_back();
//  printSub(ind+1,ds,s,arr,sum,n);
// }

// // Print any subsequence whose sum is sum is given by you.
// bool printSubSum(int ind,vector<int> &ds,int s,int arr[],int sum,int n){
//  if(ind==n){
//     // Condition is satisfied.
//     if(s==sum) {
//         for(auto it:ds)cout<<it<<" ";
//         cout<<endl;
//         return true;
//     }
//     // Condition is going to not satisfied.
//     else return false;
//  }
//  ds.push_back(arr[ind]);
//  s+=arr[ind];
// if(printSubSum(ind+1,ds,s,arr,sum,n)==true) {
//     return true;
// }
//  s-=arr[ind];
//  ds.pop_back();

//  if(printSubSum(ind+1,ds,s,arr,sum,n)==true) {return true;
//  }
// return false;
// }

// // count Subsequence of sum=k
// int printSubSum1(int ind,int s,int arr[],int sum,int n){
//  if(ind==n){
//     // Condition is satisfied.
//     if(s==sum)  return 1;
    
//     // Condition is going to not satisfied.
//     else return 0;
//  }
 
//  s+=arr[ind];
// int l=printSubSum1(ind+1,s,arr,sum,n);
//    s-=arr[ind];
//  int r=printSubSum1(ind+1,s,arr,sum,n);
//    return l+r;
// }

// // Merge Sorting
// void Merge(vector<int> &arr,int low ,int mid,int high){
//     vector<int> temp;
//     int left=low;
//     int right=mid+1;
//     while (left<=mid && right <=high)
//     {
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//        temp.push_back(arr[left]);
//             left++; 
//     }
//     while (right<=high)
//     {
//      temp.push_back(arr[right]);
//             right++;   
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
    
    
// }

// void MergeSort(vector<int> &arr,int low,int high){
//     if(low>=high) return;
//     int mid=(low+high)/2;
//     MergeSort(arr,low,mid);
//     MergeSort(arr,mid+1,high);
//     Merge(arr,low,mid,high);
// }

int fs(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
        return j;
    
}

void qs(vector<int> &arr ,int low ,int high){
    if(low<high){
        int pInd=fs(arr,low,high);
        qs(arr,low,pInd-1);
        qs(arr,pInd+1,high);
    }
}

vector<int> quicksort(vector<int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

// Combination Sum – 1
class Solution {
 public:
    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }
  public:
    vector < vector < int >> combinationSum(vector < int > & candidates, int target) {
      vector < vector < int >> ans;
      vector < int > ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    
   
   
//    fabinacci Series
    // int n=6;
    // // cin>>n;
    //  cout<<fabi(n);
       
    // Palindrome
//     string s="MADSM";
//    cout<< func(0,s);
   
//    Reverse on array 

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++) cin>>arr[i];
    // fun(0,arr,n);
    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    // name(1,n);
    // fun1(n,n);
    // fun2(n,n);
    // fun3(1,n);
    // print();
    // cout<<sum(n);
    // cout<<fact(n);


// Subsequence 

// int arr[]={3,1,2};
// int n=3;
// vector<int> ds;
// printF(0,ds,arr,n);

// Print subsequence whose sum is k

    // int arr[]={1,2,3};
    // int n=3;
    // int sum=2;
    // vector<int> ds;
    // printSub(0,ds,0,arr,sum,n);


   // Print any subsequence whose sum is sum is given by you. 
//     int arr[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector<int> ds;
//     printSubSum(0,ds,0,arr,sum,n);
   
// // count Subsequence of sum=k

    // int arr[]={1,2,1};
    // int n=3;
    // int sum=2;
    
    // cout<<printSubSum1(0,0,arr,sum,n);


//     // MergeSort Algorithm
//     vector<int> arr={9,3,4,8,5,7,2,9,10};
//     int n=11;
//     cout<<"Before Sorting array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//        MergeSort(arr,0,n-1);
// cout<<"After  Sorting Array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
       
//     return 0;
// }

// Quick Sort
//     vector<int> arr={9,3,4,8,5,7,2,9,10};
//     int n=arr.size();
//     cout<<"Before Sorting array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//        arr=quicksort(arr);
// cout<<"After  Sorting Array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
       
//     return 0;


// Combination Sum – 1
  Solution obj;
  vector < int > v {2,3,6,7};
  int target = 7;

  vector < vector < int >> ans = obj.combinationSum(v, target);
  cout << "Combinations are: " << endl;
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }
}
