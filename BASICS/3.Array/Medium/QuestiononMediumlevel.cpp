#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

string read(int n, vector<int> book, int target)
{

    // (Better solution)
//   map <int,int> mpp;
//   for(int i=0;i<n;i++){
//       int a=book[i];
//       int more=target-a;
//       if(mpp.find(more)!=mpp.end()){
//           return "YES" ; //return (mpp[more],i)
//       }
//       mpp[a]=i;
//   }
//   return "NO";

int left=0,right=n-1;
sort(book.begin(),book.end());
while(left<right){
    int sum=book[left]+book[right];
    if(sum==target){
        return "YES";
    }
    else if (sum<target)  left++;
    else right--;
     
}
return "NO";

}

// Sort an array of 0s, 1s and 2s
void sortArray(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
                low++;
                mid++;
            
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
                high--;
            
        }
        
        
    }
}

// Find the Majority Element that occurs more than N/2 times

int majorityElement(vector<int> v){
int n=v.size();

	int cnt = 0;
	int el;
	for(int i=0;i<n;i++){
		if(cnt == 0){
			cnt=1;
			el=v[i];
		}
		else if( v[i] == el){
			cnt++;
		}
		else {
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(v[i] == el) cnt1++;
	}
	if(cnt1 > (n/2)){
		return el;
	}
	return -1;
}

// Kadane’s Algorithm : Maximum Subarray Sum in an Array

long long maxSubarraySum(int arr[], int n)
{
   
    long long sum=0,maxi =LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
     
        }
        if (sum<0){
        sum=0;
    }
    }
    return maxi;

}


// Subarray with Given Sum
// void subArrWithSumKOptimal(int arr[], int n, int k) {
//   int start = 0, end = -1, sum = 0;
//   while (start < n) {
//     while ((end + 1 < n) && (sum + arr[end + 1] <= k))
//       sum += arr[++end];

//     if (sum == k) {
//       for (int p = start; p <= end; p++)
//         cout << arr[p] << " ";
//       cout << "\n";
//     }
//     sum -= arr[start];
//     start++;
//   }

// }


// Stock Buy And Sell
int maxprofit(vector<int> &arr){
    int maxPrice=0;
    int n=arr.size();
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxPrice=max(maxPrice,arr[i]-mini);
    }
    return maxPrice;
}

// Rearrange Array Elements by Sign
// Verity-1
vector<int> rearrange(vector<int> &nums){
    int n=nums.size();
    vector<int> ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negIndex]=nums[i];
            negIndex +=2;
        }
        else{
            ans[posIndex]=nums[i];
            posIndex +=2;
        }
    }
    return ans;

}

// Rearrange Array Elements by Sign
// Verity-2
vector<int> alternateNumbers(vector<int>&a) {
 vector<int> pos,neg;
 int n=a.size();
 for(int i=0;i<n;i++){
   if (a[i] > 0) {
     pos.push_back(a[i]);
   }
   else{
       neg.push_back(a[i]);
   }

 }   
 if(pos.size()>neg.size()){
     for(int i=0;i<neg.size();i++){
         a[2*i]=pos[i];
         a[2*i+1]=neg[i];
     }
     int index=neg.size()*2;
     for(int i=neg.size();i<pos.size();i++){
         a[index]=pos[i];
         index++;
     }
 }
 else{
     for(int i=0;i<pos.size();i++){
         a[2*i]=pos[i];
         a[2*i+1]=neg[i];
     }
     int index=pos.size()*2;
     for (int i = pos.size(); i < neg.size(); i++) {
       a[index] = neg[i];
       index++;
     }
 }
 return a;
}

// next_permutation :
//  find next lexicographically greater permutation

vector<int> nextGreaterPermutation(vector<int> &A) {
int ind=-1;
int n=A.size();
for(int i=n-2;i>0;i--){
    if(A[i]<A[i+1]){
        ind=i;
        break;

    }

}
if(ind==-1){
    reverse(A.begin(),A.end());
    return A;
}
for(int i=n-1;i>ind;i--){
    if(A[i]>A[ind]){
        swap(A[i],A[ind]);
        break;
    }
}
reverse(A.begin()+ind+1,A.end());
return  A;
}

// Leader in array
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int n=a.size();
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);

        }
        maxi=max(maxi,a[i]);
    }


    sort(a.begin(),a.end());
    return ans;
}

// Longest Consecutive Sequence in an Array

int longestSuccessiveElements(vector<int>&a) {
// Better solution

//    if(nums.size()==0) return 0;
//    sort(nums.begin(),nums.end());
//    int n=nums.size();
//    int lastSmaller=INT_MIN;
//    int cnt=0;
// int longest=1;
// for(int i=0;i<n;i++){
//     if(nums[i]-1==lastSmaller){
//         cnt+=1;
//         lastSmaller=nums[i];
//     }
//     else if (lastSmaller!=nums[i]){
//         cnt=1;
//         lastSmaller=nums[i];
//     }
//     longest=max(longest,cnt);
// }

// Optimal Solution
int n=a.size();
if(n==0) return 0;
int longest=1;
unordered_set<int> st;
for(int i=0;i<n;i++){
    st.insert(a[i]);

}
for(auto it : st){
    if(st.find(it-1)==st.end()){
        int cnt=1;
        int x=it;
        while(st.find(x+1)!=st.end()){
            x=x+1;
            cnt=cnt+1;
        }
        longest=max(longest,cnt);
    }
}
return longest;

}

// Set matrix zero
// Better Solution
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
// int row[n]={0};
// int col[m]={0};
// for(int i=0;i<n;i++){
// 	for(int j=0;j<m;j++){
// 		if(matrix[i][j]==0){
// 			row[i]=1;
// 			col[j]=1;
// 		}
// 	}
// }	


// for(int i=0;i<n;i++){
//   for (int j = 0; j < m; j++) {
//     if (row[i] || col[j]) {
//       matrix[i][j] = 0;
//     }
//           }
//   }

// Best Solution
int col0=1;

for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
          if (matrix[i][j] == 0) {
			  matrix[i][0]=0;
			  if(j !=0)
			  matrix[0][j]=0;
			  else
			  col0=0;
          }
        }
}


for(int i=0;i<n;i++){
  for (int j = 0; j < m; j++) {
 if(matrix[i][j] !=0){
	 if(matrix[0][j]==0 || matrix[i][0]==0){
		 matrix[i][j]=0;
	 }
 }
 
  }
}

if(matrix[0][0]==0){
  for (int j = 0; j < m; j++) {
    matrix[0][j] = 0;
  }
}

if(col0==0){
	for(int i=0;i<n;i++){
		matrix[i][0]=0;
	}
}
return matrix;
} 


// Rotate Matrix at 90 degree in clock wise direction.
void rotateMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		
			reverse(mat[i].begin(),mat[i].end());
		}
	
}

// Spiral Traversal of Matrix
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int n=MATRIX.size();
    int m=MATRIX[0].size();
    int left=0 ,right=m-1;
    int top=0 , bottom=n-1;
    vector <int> ans;
    while(top<= bottom && left<=right){
    for(int i=left;i<=right;i++){
        ans.push_back(MATRIX[top][i]);
    }
    top++;

    for(int i=top;i<=bottom;i++){
      ans.push_back(MATRIX[i][right]);  
    }
    right--;

    if(top<=bottom){

    for(int i=right;i>=left;i--){
        ans.push_back(MATRIX[bottom][i]);
    }
    bottom--;
    }

    if(left<=right){
    for (int i = bottom; i >= top; i--) {
      ans.push_back(MATRIX[i][left]);
    }
    left++;
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
    // int n=5;
    // vector<int> book={2,6,5,8,11};
    // int target=14;
    // string ans=read(n,book,target);
    // cout<<"Sum of the two number which have taget=>  "<<ans<<endl;
    
    // Sort an array of 0s, 1s and 2s
    
    // int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // sortArray(arr,n);
    // cout<<"After Sorting"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
   // Find the Majority Element that occurs more than N/2 times
    // vector<int> v={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    // int ans=majorityElement(v);
    // cout<<"Majority Element of the aray is => " <<ans<<endl;

// Kadane’s Algorithm : Maximum Subarray Sum in an Array
// int arr[]={-2,-3,4,-1,-2,1,5,-3};
// int n=sizeof(arr)/sizeof(arr[0]);
// long long maxSum=maxSubarraySum(arr,n);
// cout<<"Maximum  Subarray sum in an array => "<< maxSum<< endl ;
    
// int arr[] = {1, 9, 3, 7};
//   int n = sizeof(arr) / sizeof(arr[0]), k = 10;
 
//   cout << "Subarray with given sum is: " << endl;
//    subArrWithSumKOptimal(arr, n, k);

// // Stock Buy And Sell
// vector<int> arr={7,1,5,3,6,4};
// int maxPro=maxprofit(arr);
// cout<<"Maximum profit "<<maxPro<<endl;

// Rearrange Array Elements by Sign
// Verity-1
//   vector<int> nums={1,2,-4,-5};
//   vector<int> ans=rearrange(nums);
//   for(int i=0;i<ans.size();i++) {
//     cout <<ans[i]<<" ";
//   }

  // Rearrange Array Elements by Sign
// Verity-2
//  vector<int> a={1,2,-4,-5,3,4};
//   vector<int> ans=alternateNumbers(a);
//   cout<<"Rearrange array element by sign=> "<<endl;
//   for(int i=0;i<ans.size();i++) {
//     cout <<ans[i]<<" ";
//   }

// next_permutation : find next
//  lexicographically greater permutation
//  vector<int> A={2, 1, 5, 4, 3,6,7};
//   vector<int> ans= nextGreaterPermutation(A);
//   cout<<"The next permutation is: [";
//   for(auto it:ans){
//     cout<<it<<" ";
//   }
//   cout<<"]";

  // Leader in array
    
//   vector<int> a = {10, 22, 12, 3, 4,5, 6};

//   vector<int> ans = superiorElements(a);
  
//   cout<<" Leader in array=> ";
//   for(int i = ans.size()-1;i>=0;i--){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;


// 
// Longest Consecutive Sequence in an Array
// vector<int> nums={102,4,5,100,1,101,3,2,1,1};
// int log=longestSuccessiveElements(nums);
// cout<<"Longest Consecutive sequence Is => "<< log<<endl;


// // Set matrix zero
// vector<vector<int>> matrix = {{2,3}, {2,4,3}, {1, 0,0}};
//     int n = matrix.size();
//     int m = matrix.size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << " ";
//     }

//  vector < vector < int >> arr;
//     arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     rotateMatrix(arr);
//     cout << "Rotated Image" << endl;
//     for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr[0].size(); j++) {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
//     }


// Spiral Traversal of Matrix
 vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans =spiralMatrix(mat);
  cout<<"Spiral Matrix is "<< endl;

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;

    return 0;
}