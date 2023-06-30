#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    vector<int> arr={3,4,5,6,7,8,9,10,11,12};
    int target;
    cin>>target;
    int ans=search(arr,target);
    cout<<"Search in the array is => "<<ans<<" ";
}
