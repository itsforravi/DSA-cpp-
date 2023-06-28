#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Program to generate Pascal’s Triangle
// Type : 1
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

int pascalTriangle(int r ,int c){
    int element=nCr(r,c);
    return element;
}


// Type : 2

int nCr1(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;
}

void pascalTriangle1(int n){
    for(int c=1;c<=n; c++){
        cout<<nCr1(n-1,c-1)<<" ";
    }
    cout<<" ";
}


// Type : 3
int nCr2(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return  (int)res;
}

vector<vector<int>> pascalTriangle2(int n) {

    vector<vector<int>> ans;
    for(int row=1;row<=n;row++){
        vector<int> templist;
        for(int col=1;col<=row;col++){
            templist.push_back(nCr2(row-1,col-1));
        }
        ans.push_back(templist);


    }
    return ans;
    }


// Majority Elements(>N/3 times) 
vector<int> majorityElement(vector<int> v) {
	// Better Solution
    
    // vector<int> ls;
	// map<int,int> mpp;
	// int n=v.size();
	// int mini=(int)(n/3)+1;
	// for(int i=0;i<n;i++){
	// 	mpp[v[i]]++;
	// 	if(mpp[v[i]]==mini){
	// 		ls.push_back(v[i]);
	// 	}
	// 	if(ls.size()==2) break;
	// }
	// sort(ls.begin(),ls.end());
	// return ls;

    //Optimal solution
    int cnt1=0,cnt2=0;
int el1=INT_MIN;
int el2=INT_MIN;
for(int i=0;i<v.size();i++){
	if(cnt1==0 && el2!=v[i]){
		cnt1=1;
		el1=v[i];
	}
	else if (cnt2==0 && el1!=v[i]){
		cnt2=1;
		el2=v[i];
	}
	else if (el1==v[i]) cnt1++;
	else if (el2==v[i]) cnt2++;
	else{
		cnt1--;
		cnt2--;
	}
}
vector<int> ls;
cnt1=0,cnt2=0;
for(int i=0;i<v.size();i++){
	if(el1==v[i]) cnt1++;
	if(el2==v[i]) cnt2++;
}
int mini=(int)(v.size()/3)+1;
if(cnt1>=mini) ls.push_back(el1);
if(cnt2>=mini) ls.push_back(el2);
sort(ls.begin(),ls.end());
return ls;
}


// 3 Sum Problem
// Better Solution
vector<vector<int>> triplet( vector<int> &arr)
{
 int n=arr.size();
 set<vector<int>> st;
 for(int i=0;i<n;i++){
     set<int> hashmap;
     for(int j=i+1;j<n;j++){
         int thrd=-(arr[i]+arr[j]);
         if(hashmap.find(thrd)!=hashmap.end()){
             vector<int> temp={arr[i],arr[j] ,thrd};
             sort(temp.begin(),temp.end());
             st.insert(temp);
         }
         hashmap.insert(arr[j]);
   
 }
 }
 
  vector<vector<int>> ans(st.begin(),st.end());
 return ans;
}

// Optimal solution
vector<vector<int>> triplet1( vector<int> &arr)
{
    int n=arr.size();
vector<vector<int>> ans;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        int sum=arr[i]+arr[j]+arr[k];
        if(sum<0){
            j++;
        }
        else if(sum>0){
            k--;
        }
        else{
            vector<int> temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && arr[j]==arr[j-1]) j++;
            while(j<k && arr[k]==arr[k+1]) k--;

        }
    }
}
    return ans;
}

// 4 Sum Problem 
// Better Solution
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n=nums.size();
    set<vector<int>> st;
    for(int i=0;i<n ;i++){
        for(int j=i+1;j<n;j++){

            set<long long> hashset; 
            for(int k=j+1;k<n;k++){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                long long fourth=target-sum;
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int> temp={nums[i],nums[j],nums[k],(int)(fourth)};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);

            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return  ans;
}

// Optimal Solution

vector<vector<int>> fourSum1(vector<int>& nums, int target) {
    int n=nums.size();
    vector<vector<int>> ans;
   
    sort(nums.begin(),nums.end());
    for(int i=0;i<n ;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        
        for(int j=i+1;j<n;j++){
            if(j!=i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum==target){
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++,l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;

                }

            
            else if(sum<target) k++;
            else l--;
                }
        } 
    }
 
    return  ans;
}

// Length of the longest subarray with zero Sum

int solve(vector<int>& a) {
    int maxLen = 0;
    unordered_map<int, int> mpp;
    int sum = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        if (sum == 0) {
            maxLen = i + 1;
        } else if (mpp.find(sum) != mpp.end()) {
            maxLen = max(maxLen, i - mpp[sum]);
        } else {
            mpp[sum] = i;
        }
    }

    return maxLen;
}

// Count the number of subarrays with given xor K
// Brute Force
int subarraysWithSumK1(vector<int> a, int k) {
    int n = a.size(); 
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int xorr = 0;
            for (int K = i; K <= j; K++) {
                xorr = xorr ^ a[K];
            }
            if (xorr == k) cnt++;
        }
    }
    return cnt;
}
// Better Solution
int subarraysWithSumK2(vector<int> a, int k) {
    int n = a.size(); 
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int xorr = 0;
        for (int j = i; j < n; j++) {
            xorr = xorr ^ a[j];
            if (xorr == k) cnt++;
        }
    }
    return cnt;
}


// Optimal solution
int subarraysWithSumK3(vector < int > a, int b) {
    
    int xr=0;
    map<int,int> mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        int x=xr^b;
        cnt +=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}


// Merge Overlapping Sub-intervals
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	int n=arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
		int start=arr[i][0];
		int end=arr[i][1];
		if(!ans.empty() && end <= ans.back()[1]){
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(arr[j][0]<=end){
				end=max(end,arr[j][1]);
			}
			else{
				break;
			}
		}
		ans.push_back({start,end});
	}
	return ans;

	
}


// Optimal Solution
vector<vector<int>> mergeOverlappingIntervals1(vector<vector<int>> &arr){
	int n=arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	for(int i=0;i<n;i++){
	if(ans.empty()|| arr[i][0] >ans.back()[1]){
       ans.push_back(arr[i]);
	}
	else{
		ans.back()[1] =max(ans.back()[1],arr[i][1]);
	}
	} 
	return ans;
}
// Merge two Sorted Arrays Without Extra Space
// Brute Force
void marge(long long arr1[],long long arr2[],int n,int m){
    long long arr3[n+m];
    int left=0;
    int right=0;
    int index=0;
    while (left<n && right<m)
    {
        if(arr1[left]<=arr2[right]){
            arr3[index]=arr1[left];
            index++,left++;

        }
        else{
            arr3[index]=arr2[right];
            index++,right++;
        }
    }
    while(left<n){
        arr3[index++]=arr1[left++];
    }
    while(right<m){
        arr3[index++]=arr2[right++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n) arr1[i]=arr3[i];
        else arr2[i-n]=arr3[i];
    }

    
}

// Optmial Solution
void marge1(long long arr1[],long long arr2[],int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right <m){
        if(arr1[left]>= arr2[right]){
            swap(arr1[left],arr2[right]);
            left--,right++;

        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Type :1
    // int r=5;
    // int c=3;
    // int element =pascalTriangle(r,c);
    // cout<<"Pascal Triangle (r,c) is => " << element<< " ";
    

    // Type :2
    // int n=6;
    // cout<<"Pascal Tringle row number "<<n<<endl;
    // pascalTriangle1(n);
    
// Type :3
// int n;
// cin>>n;
// vector<vector<int>> ans=pascalTriangle2(n);
// for(auto it:ans){
//     for(auto ele : it){
//         cout<<ele<<" ";

//     }

//     cout<<endl;
// }



// Majority Elements(>N/3 times) 
// vector<int> arr={11,22,33,22,33,22,11,11};
// vector<int> element=majorityElement(arr);
//  cout << "The majority elements are: "<<endl;

// for(auto it : element){
//     cout<<it <<" ";
// }

// 3 sum Problem
// Better solution
// vector <int> num1={-1,0,1,2,-1,-4};
// vector<vector<int>> ans=triplet(num1);
// cout<<" 3 Sum Problem ans is " << endl;
// for(int i=0;i<ans.size();i++){
//     for(int j=0;j<ans[i].size();j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }

// Optimal solution
// vector <int> num1={-1,0,1,2,-1,-4,2};
// vector<vector<int>> ans=triplet1(num1);
// cout<<" 3 Sum Problem in optimal solution is " << endl;
// for(int i=0;i<ans.size();i++){
//     for(int j=0;j<ans[i].size();j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }

// 4 Sum Problem 
// vector<int > nums={4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
// int target;
// cin>>target;
// vector<vector<int> > ans=fourSum(nums,target);
// cout<<" The quadruplets are: " <<endl;
// for(auto it: ans){
//     cout<<"[ ";
//     for(auto ele :it){
//         cout<<ele<<" ";
//     }
//     cout<<" ]"<<endl;
// }

// Optimal Solution
// vector<int > nums={4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
// int target;
// cin>>target;
// vector<vector<int> > ans=fourSum1(nums,target);
// cout<<" The quadruplets are: " <<endl;
// for(auto it: ans){
//     cout<<"[ ";
//     for(auto ele :it){
//         cout<<ele<<" ";
//     }
//     cout<<" ]"<<endl;
// }


// Length of the longest subarray with zero Sum
//  vector<int> a = {9, -3, 3, -1, 6, -5};
//     cout << solve(a) << endl;

// Count the number of subarrays with given xor K
// vector<int> a={4, 2,3,2, 6, 4};
// int b;
// cin>>b;
// int ans=subarraysWithSumK3(a,b);
// cout<<" The number of subarrays with XOR k is: "<<ans; 


// Merge Overlapping Sub-intervals
//  vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18},{19,22}};
//     vector<vector<int>> ans = mergeOverlappingIntervals1(arr);
//     cout << "The merged intervals are: " << "\n";
//     for (auto it : ans) {
//         cout << "[" << it[0] << ", " << it[1] << "] ";
//     }
//     cout << endl;


// Merge two Sorted Arrays Without Extra Space
// Brute Force
// long long arr1[]={1,3,5,7};
// long long arr2[]={0,2,8,9};
// int n=4,m=4;
// marge(arr1,arr2,n,m);
// cout<<"The merged arrays are: "<<endl;
// cout<<"arr1[]= ";
//  cout<<"[ ";
// for(int i=0;i<n;i++){
   
//     cout<<arr1[i]<<" ";
    
// }
// cout<<" ]";
// cout<<endl;

// cout<<"arr2[]= ";
// cout<<"[ ";
// for(int i=0;i<m;i++){
//     cout<<arr2[i]<<" ";
// }
// cout<<" ]";

// Optimal Solution
long long arr1[]={1,3,5,7};
long long arr2[]={0,2,8,9,4};
int n=4,m=5;
marge1(arr1,arr2,n,m);
cout<<"The merged arrays are: "<<endl;
cout<<"arr1[]= ";
 cout<<"[ ";
for(int i=0;i<n;i++){
   
    cout<<arr1[i]<<" ";
    
}
cout<<" ]";
cout<<endl;

cout<<"arr2[]= ";
cout<<"[ ";
for(int i=0;i<m;i++){
    cout<<arr2[i]<<" ";
}
cout<<" ]";

    return 0;
}