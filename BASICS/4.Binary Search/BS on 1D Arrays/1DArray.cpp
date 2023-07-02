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

//Implement Lower Bound
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

//Implement Upper Bound
int upperBound(vector<int> &arr, int x, int n){
	
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]> x) {
			ans=mid;
			high=mid-1;
		}
		
		else{
			low=mid+1;
		} 

	}
	return ans;
}
	
// Search Insert Position
 int searchInsert(vector<int>& arr, int m)
{
	int n=arr.size();
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=m){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}

// Floor and Ceil in Sorted Array
int floor(int arr[],int n,int x){
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<=x){
			ans=arr[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;

}

int ceil(int arr[],int n,int x){
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=arr[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
			
		}
	}
	return ans;

}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int f=floor(arr,n,x);
	int c=ceil(arr,n,x);
	return make_pair(f,c);
	
}

// First and Last occurance
int lowerBound1(vector<int> arr, int n, int x) {
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
int upperBound1(vector<int> &arr, int n, int x){
	
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]> x) {
			ans=mid;
			high=mid-1;
		}
		
		else{
			low=mid+1;
		} 

	}
	return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int lb=lowerBound1( arr, n, k);
    if(lb==n || arr[lb]!=k) return {-1,-1};
    return {lb,upperBound1(arr,n,k)-1};
}

// first occurance
int first(int arr[],int n,int k){
	int low=0,high=n-1;
	int first=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==k){
			first=mid;
			high=mid-1;
		}
		else if(arr[mid]<k){
          low=mid+1;
		}
		else{
            high=mid-1;
		}
	}
	return first;
}
// Last occurance
int last(int arr[],int n,int k){
	int low=0,high=n-1;
	int last=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==k){
			last=mid;
			low=mid+1;
		}
		else if(arr[mid]<k){
          low=mid+1;
		}
		else{
            high=mid-1;
		}
	}
	return last;
}

// Count Occurrences in Sorted Array

int firstOccurance(vector<int> arr, int n, int x) {
	int low=0,high=n-1;
	int first=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]== x) {
			first=mid;
			high=mid-1;
		}
		
		else if(arr[mid]<x){
			low=mid+1;
		} 
		else{
			high=mid-1;
		}

	}
	return first;
}
int lastOccurance(vector<int> &arr, int n, int x){
	
	int low=0,high=n-1;
	int last=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]== x) {
			last=mid;
			low=mid+1;
		}
		
		else if(arr[mid]<x){
			low=mid+1;
		} 
		else{
			high=mid-1;
		}

	}
	return last;
}
pair<int, int> firstAndLastPosition1(vector<int>& arr, int n, int k)
{
    int lb=firstOccurance( arr, n, k);
    if(lb==-1) return {-1,-1};
	int up=lastOccurance(arr,n,k);
    return {lb,up};
}
int count1(vector<int>& arr, int n, int x) {
	pair<int, int> ans= firstAndLastPosition1(arr,  n,  x);
	if(ans.first==-1) return 0;
	return ans.second-ans.first+1;
}

// Search Element in a Rotated Sorted Array

int search(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return  mid;
        if(arr[low]<=arr[mid]){
          if (arr[low] <= k && k <= arr[mid]) {
            high = mid - 1;
          } else {
            low = mid + 1;
          }
        }

        else {
          if (arr[mid] <= k && k <= arr[high]) {
            low = mid + 1;
          }
           else {
            high = mid - 1;
          }
        }
        
    }
    return -1;
}

// Search Element in Rotated Sorted Array II
int searchRotateII(vector<int>& arr, int k)
{
	int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k) return  mid;
		if(arr[low]==arr[mid] && arr[mid]==arr[high]){
			low++,high--;
			continue;
		}
        if(arr[low]<=arr[mid]){
          if (arr[low] <= k && k <= arr[mid]) {
            high = mid - 1;
          } else {
            low = mid + 1;
          }
        }

        else {
          if (arr[mid] <= k && k <= arr[high]) {
            low = mid + 1;
          }
           else {
            high = mid - 1;
          }
        }
        
    }
    return false;
}

// Minimum in Rotated Sorted Array
// Time comlexity nearabout=O(N)
int findMin(vector<int>& arr)
{
	int n=arr.size();
	int low=0,high=n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
}

// // Minimum in Rotated Sorted Array
// Optimized for better comlexity;=O(log N)
int findMin1(vector<int>& arr)
{
	int n=arr.size();
	int low=0,high=n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[high]){
			ans=min(ans,arr[low]);
			break;
		}
		if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
}

// Find out how many times the array has been rotated
int findKRotation(vector<int> &arr){
    //   int n=
	int low=0,high=arr.size()-1;
	int ans=INT_MAX;
    int index=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[high]){
			if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
			break;
		}
		if(arr[low]<=arr[mid]){
			if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
			low=mid+1;
		}
		else{
			if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
			high=mid-1;
		}
	}
	return index;
}

// Search Single Element in a sorted array
int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();
	if(n==1) return arr[0];
	if(arr[0]!=arr[1] ) return arr[0];
	if(arr[n-1]!=arr[n-2]) return arr[n-1];
	int low=1,high=n-2;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==arr[mid+1] && arr[mid]==arr[mid-1]) return arr[mid];
		if((mid%2==1 && arr[mid-1]==arr[mid]) || (mid%2==0 && arr[mid+1]==arr[mid])){
			low=mid+1;
		} 
		// return arr[mid];
           else{
			   high=mid-1;
		   }
	}
return-1;
}

//Peak element in Array
 int peakEleOptimal(int arr[], int n) {
  int start = 0, end = n - 1;

  while (start < end) {
    int mid = (start + end) / 2;

    if (mid == 0)
      return arr[0] >= arr[1] ? arr[0] : arr[1];

    if (mid == n - 1)
      return arr[n - 1] >= arr[n - 2] ? arr[n - 1] : arr[n - 2];
    if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
      return arr[mid];
    if (arr[mid] < arr[mid - 1])
      end = mid - 1;
    else
      start = mid + 1;
  }

  return arr[start];
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


//Implement Lower bound
    // vector<int> arr={3, 5, 8, 15, 19};
    // int target;
    // cin>>target;
    // int n=5;
    // int ans=lowerBound(arr,n,target);
    // cout<<"Lower Bound Search in the array is => "<<ans<<" ";

//Implement Upper Bound
    // vector<int> arr={3, 5, 8, 15, 19};
    // int target;
    // cin>>target;
    // int n=5;
    // int ans=upperBound(arr,n,target);
    // cout<<"Lower Bound Search in the array is => "<<ans<<" ";

// Search Insert Position
//    vector<int> arr={3, 5, 8, 15, 19};
//     int target;
//     cin>>target;
   
//     int ans=searchInsert(arr,target);
//     cout<<" Search insert  in the array is => "<<ans<<" ";


// Floor and Ceil in Sorted Array
    //  int arr[] = {3, 4, 4, 7, 8, 10};
	// int n = 6, x = 9;
	// pair<int, int> ans = getFloorAndCeil(arr, n, x);
	// cout << "The floor and ceil are: " << ans.first
	//      << " " << ans.second << endl;

//  firstAndLastPosition 
// vector<int> arr = {3, 4, 4, 7,8,8, 8, 10};
// 	int n = 8, k = 8;
// 	pair<int, int> ans = firstAndLastPosition(arr, n, k);
// 	cout << "firstAndLastPosition of the arry: " << ans.first
// 	     << " " << ans.second << endl;
//          return 0;

// first occurance

// int arr[]={2,3,4,4,5,6,6,7,8};
// int n=9;
// int k=6;
// int ans=first(arr,n,k);
// cout<<" First occurance in the array=> "<<ans<<" ";


// Last Occurance

// int arr[]={2,3,4,4,5,6,6,7,8};
// int n=9;
// int k=8;
// int ans=last(arr,n,k);
// cout<<" last occurance in the array=> "<<ans<<" ";

// Count Occurrences in Sorted Array

// vector<int> arr={2,3,4,4,5,6,6,7,8};
// int n=9;
// int k=6;
// int ans=count1(arr,n,k);
// cout<<"The number of occurrences is: "<<ans<<" ";

// Search Element in a Rotated Sorted Array

// vector<int> arr={7,8,9,1,2,3,4,5,6};
// int n=9;
// int k=1;
// int ans=search(arr,n,k);
// cout<<"Search Element in a Rotated Sorted Array: "<<ans<<" ";


// Search Element in Rotated Sorted Array II

// vector<int> arr={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};

// int k;
// cin>>k;
// int ans=searchRotateII(arr,k);
// // cout<<"Search Element in a Rotated Sorted Array II: "<<ans<<" ";
//  if (!ans)
//         cout << "Target is not present.\n";
//     else
//         cout << "Target is present in the array.\n";

// Minimum in Rotated Sorted Array
// vector<int> arr={7, 8, 0,1, 2, 3, 4, 5, 6};
// int ans=findMin1(arr);
// cout<<"Minimun in the array : "<<ans<<" ";

// Find out how many times the array has been rotated
// vector<int> arr={4, 5, 6, 7, 0, 1, 2, 3};
// int ans=findKRotation(arr);
// cout<<"The array has been rotated: "<<ans<<" times ";

// Search Single Element in a sorted array

// vector<int> arr={1,1,2,2,3,3,4,5,5,6,6,7,7};
// int ans=singleNonDuplicate(arr);
// cout<<"Single Element in a sorted array: "<<ans<<" ";

//Peak element in Array
int arr[]={1,2,3,4,5,6,7,8,1};
 int n = sizeof(arr) / sizeof(arr[0]);
int ans=peakEleOptimal(arr,n);
cout<<"Peak Element in the Array: "<<ans <<" ";


return 0;

}
