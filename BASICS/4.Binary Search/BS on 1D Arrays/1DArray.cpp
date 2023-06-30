#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Binary Search to find in X sorted Array
// Iterative Implementation
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
       int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

// Recursive  Implementation
int bs(vector<int> &arr,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(target>arr[mid]) return bs(arr,mid+1,high,target);
    return bs(arr,low,mid-1,target);
}

int search1(vector<int>& nums, int target) {
    
    return bs(nums,0,nums.size()-1,target);


}

// Lower Bound
int lowerBound(vector<int> arr, int n, int x) {
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>= x) {
			ans=mid;
			high=mid-1;
		}
		
		else{
			low=mid+1;
		} 

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
    // Binary Search to find in X sorted Array
// Iterative Implementation
    // vector<int> arr={3,4,5,6,7,8,9,10,11,12};
    // int target;
    // cin>>target;
    // int ans=search(arr,target);
    // cout<<"Search in the array is => "<<ans<<" ";


// Recursive  Implementation
    // vector<int> arr={3,4,5,6,7,8,9,10,11,12};
    // int target;
    // cin>>target;
    // int ans=search1(arr,target);
    // cout<<"Search in the array is => "<<ans<<" ";

    // Lower bound
    vector<int> arr={3, 5, 8, 15, 19};
    int target;
    cin>>target;
    int n=5;
    int ans=lowerBound(arr,n,target);
    cout<<"Lower Bound Search in the array is => "<<ans<<" ";
}
