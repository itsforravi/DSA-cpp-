#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Find square root of a number in log…
int floorSqrt(int n)
{
    int low=1,high=n;
    while(low<=high){
        long long mid=(low+high)/2;
        long long val=(mid*mid);
        if(val<=(long long)(n)){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}

// Nth Root of a Number using Binary Search
int func(int mid,int n,int m){
  long long ans=1;
  for(int i=1;i<=n;i++){
    ans=ans*mid;
    if(ans>m) return 2;
  }
  if(ans==m) return 1;
  return 0;
}

int  NthRoot(int n, int m) {
  long long low=1,high=m;
  while(low<=high){
    long long mid=(low+high)/2;
    long long  midN=func(mid,n,m);
    if(midN==1) {
      return mid;
    } else if (midN == 0) {
      low + mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

// Koko Eating Bananas
int findMax(vector<int> &v){
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}
int calculatetotalhours(vector<int> &v ,int hourly){
    int totalH=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        totalH+=ceil((double)(v[i])/(double)(hourly));
    }
    return totalH;

}
int minimumRateToEatBananas(vector<int> v, int h) {
    int low=1,high=findMax(v);
    while(low<=high){
        int mid=(low+high)/2;
        int totalH= calculatetotalhours(v,mid);
        if(totalH<=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
 return low;
}

// Minimum days to make M bouquets



bool possible(vector<int> & arr,int day,int k,int m){
	int n=arr.size();
	int cnt=0;
	int noofB=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=day){
			cnt++;
		}
		else{
			noofB+=(cnt/k);
			cnt=0;
		}
	}
	noofB +=(cnt/k);
	return noofB>=m;
}




int roseGarden(vector<int> arr, int k, int m)
{
	long long val=k*1LL*m*1LL;
	int n=arr.size();
	if(val>n) return -1;
	int mini=INT_MAX,maxi=INT_MIN;
	for(int i=0;i<n;i++){
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	int low=mini,high=maxi;
	while(low<=high){
		int mid=(low+high)/2;
		if(possible(arr,mid,k,m)){
			high=mid-1;
		}
		else{
			low=mid+1;
		}

	}
	return low;
}

// Find the Smallest Divisor Given a Threshold
int sumDby(vector<int> &arr,int div){
	int n = arr.size();
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += ceil ((double)(arr[i]) / (double)(div));
	}
	return sum;
}


int smallestDivisor(vector<int>& arr, int limit)
{  int n = arr.size();
	if(n > limit) return -1;
	int low = 1,high =  *max_element(arr.begin(),arr.end());
	while(low <= high){
		int mid = (low+high)/2;
		if(sumDby(arr,mid) <= limit){
			 high=mid-1;
		}
		else{
			 low=mid+1;
		}
	}
	return low;
}

// Capacity to Ship Packages within D Days

int sumofday(vector<int> &weights,int cap){
    int n=weights.size();
    int days=1,load=0;
    for(int i=0;i<n;i++){
        if(weights[i]+load>cap){
            days +=1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return days;
}




int leastWeightCapacity(vector<int> &weights, int d)
{
   
    int low= *max_element(weights.begin(),weights.end());
    int high= accumulate(weights.begin(),weights.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int numberofDays=sumofday(weights,mid);
        if(numberofDays<=d){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return low;
}


// Kth Missing Positive Number
int missingK(vector < int > vec, int n, int k) {
   int low=0,high=n-1;
   while(low<=high){
       int mid=(low+high)/2;
       int missing=vec[mid]-(mid+1);
       if(missing<k){
           low=mid+1;
       }
       else{
           high=mid-1;
       }
   }
   return (high+1+k);
}


// Aggressive Cows 
bool canWePlace(vector<int> &stall,int dist,int cows){
    int cntcows=1,last=stall[0];
    for(int i=1;i<stall.size();i++){
       if(stall[i]-last>=dist){
           cntcows++;
           last=stall[i];
       }
       if(cntcows>=cows) return true;

    }
    return false;
}



int aggressiveCows(vector<int> &stall, int k)
{
    sort(stall.begin(),stall.end());
    int n=stall.size();
    int low=1,high=stall[n-1]-stall[0];
     while(low<=high){
         int mid=(low+high)/2;
         if(canWePlace(stall,mid,k)==true){
             low=mid+1;
         }
         else high=mid-1;
     }
     return high;
    
}


// Book Allocation Problem
int countstudent(vector<int> &arr,int pages){
    int student=1;
    long long pagestudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagestudent+arr[i]<=pages){
            pagestudent+=arr[i];
        }
        else{
            student+=1;
            pagestudent=arr[i];
        }
    }
    return student;
}



int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int noStudent=countstudent(arr,mid);
        if(noStudent>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;

}


// Split array - Largest Sum
int isPossible(vector<int> &arr,int number){
       int count=0,tempsum=0,n=arr.size();
       for(int i=0;i<n;i++){
           if(arr[i]+tempsum<=number){
               tempsum+=arr[i];

           }
           else{
               count ++;
               tempsum=arr[i];

           }
       }
       count++;
       return count;
   }
   
  
int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=n-1;
        int asw=0;
        for(int i=0;i<n;i++){
            low=max(low,nums[i]);
            high+=nums[i];}
            while(low<=high){
           
            int mid=(low+high)/2;
            int count=isPossible(nums,mid);
            if(count<=k){
                 asw=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return asw;
    }

// Median of Two Sorted Arrays of different sizes
//  float findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
//         int n1=nums1.size();
//         int n2=nums2.size();
//         int low=0,high=n1;
//         if(low<=high){
//              int cut1 = (low+high)>>1;
//              int cut2 =((n1+n2)+1)/2 - cut1;
//              int left1 = (cut1 == 0)? INT_MIN:nums1[cut1-1];
//              int left2 = (cut2 == 0)? INT_MIN:nums2[cut2-1];
//              int right1 = (cut1 == n1)? INT_MAX:nums1[cut1];
//              int right2 = (cut2 == n2)? INT_MAX:nums2[cut2];


//              if(left1 <= right2 && left2 <= right1){
//                  if((n1+n2)%2==0)
//                  return (max(left1,left2)+min(right1,right2))/2.0;

//                  else return max(left1,left2);


//              }
//              else if(left1>right2){ high=cut1-1;}
//              else {low=cut1+1;}
//         }

        
    
//     return 0.0;
//     }
    

    
float median(int nums1[],int nums2[],int m,int n) {
    if(m>n)
        return median(nums2,nums1,n,m);
    int low=0,high=m,medianPos=((m+n)+1)/2;
    while(low<=high) {
        int cut1 = (low+high)>>1;
        int cut2 = medianPos - cut1;
        
        int l1 = (cut1 == 0)? INT_MIN:nums1[cut1-1];
        int l2 = (cut2 == 0)? INT_MIN:nums2[cut2-1];
        int r1 = (cut1 == m)? INT_MAX:nums1[cut1];
        int r2 = (cut2 == n)? INT_MAX:nums2[cut2];
        
        if(l1<=r2 && l2<=r1) {
            if((m+n)%2 != 0)
                return max(l1,l2);
            else 
                return (max(l1,l2)+min(r1,r2))/2.0;
        }
        else if(l1>r2) high = cut1-1;
        else low = cut1+1;
    }
    return 0.0;
    
    }


// K-th Element of two sorted arrays
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m ){
            return kthElement(arr1,arr2,n,m,k);
            
        }
        int low=max(0,k-m),high=min(k,n);
        while(low<=high){
            int cut1=(low+high)>>1;
            int cut2=k-cut1;
            int l1=cut1==0 ? INT_MIN:arr1[cut1-1]; 
            int l2=cut2==0 ? INT_MIN:arr2[cut2-1]; 
            int r1=cut1==n ? INT_MAX:arr1[cut1]; 
            int r2=cut2==m ? INT_MAX:arr2[cut2]; 
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
            else if(l1>l2){
                high=cut1-1;
            }
            else{
                low=cut1+1;
            }
        }
        
    
    return 1;
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// // Find square root of a number in log…
// int n;
// cin>>n;
// int ans=floorSqrt(n);
// cout<<"Square root of a number: "<<ans<<" ";

// Nth Root of a Number using Binary Search
// int n=4,m=27;

// int ans=NthRoot(n,m);
// cout<<"Nth Root of a Number using Binary Search: "<<ans<<" ";

// // Koko Eating Bananas
// vector<int> v={3,4,7,13};
// int h=7;
// // cin>>h;
// int ans=minimumRateToEatBananas(v,h);
// cout<<"Koko Eating Bananas: "<<ans<<" Bananas/Hrs. ";

// Minimum days to make M bouquets
// vector<int> arr={7, 7, 7, 7, 13, 11, 12, 7};
// int m=2;
// int k=4;
// int ans=roseGarden(arr,m,k);
// if(ans==-1){
//     cout<<"We cannot make m bouquets.\n";
// }
// else{
//     cout<<"We can make bouquets on a days: "<<ans<<" ";
// }



// Find the Smallest Divisor Given a Threshold

// vector<int> arr={1, 2, 3, 4, 5,6};
// int limit=8;
// int ans=smallestDivisor(arr,limit);
// if(ans==-1){
//     cout<<"We cannot find minimum divisor\n";
// }
// else{
//     cout<<"We can find minimum divisor: "<<ans<<" ";
// }


// Capacity to Ship Packages within Days
// vector<int> arr={1,2,3,4,5,6,7,8,9,10};
// int cap=15;
// int ans=leastWeightCapacity(arr,cap);
// if(ans==-1){
//     cout<<"We cannot  Ship Packages within Days\n";
// }
// else{
//     cout<<"We can Ship Packages within : "<<ans<<" days ";
// }

// Kth Missing Positive Number
// vector<int> arr={2,3,4,7,9,11};
// int n=sizeof(arr)/sizeof(arr[0]);
// int k1=6;
// int ans=missingK(arr,n,k1);
// if(ans==-1){
//     cout<<"We cannot  kth missing number \n";
// }
// else{
//     cout<<"We can kth missing number : "<<ans<<"  ";
// }

// Aggressive Cows 
// vector<int> stall={1,2,8,4,9};
// int k;
// cin>>k;
// int ans=aggressiveCows(stall,k);
// cout<<"Aggressive Cows : "<<ans<<" ";

// Book Allocation Problem
// vector<int> arr={25,46,28,49,24};
// int n=sizeof(arr)/sizeof(arr[0]);
// int k;
// cin>>k;
// int ans=findPages(arr,n,k);
// cout<<"Allocate the book of the pages: "<<ans<<" student";

// Split array - Largest Sum
// vector<int> arr={7,2,5,10,8};
// // int n=sizeof(arr)/sizeof(arr[0]);
// int k;
// cin>>k;
// int ans=splitArray(arr,k);
// cout<<"Split array - Largest Sum: "<<ans<<" ";


// vector<int> arr1 = {1,4,7,10,12};
// vector<int> arr2= {2,3,6,15};

// cout<<"Median of array: "<<findMedianSortedArrays(arr1,arr2)<<" ";


// // Median of Two Sorted Arrays of different sizes

// int nums1[] = {1,4,7,10,12};
//     int nums2[] = {2,3,6,15};
//     int m = sizeof(nums1)/sizeof(nums1[0]);
//     int n = sizeof(nums2)/sizeof(nums2[0]);
//     cout<<"The Median of two sorted arrays is "<<fixed<<setprecision(5)
//     <<median(nums1,nums2,m,n);

// K-th Element of two sorted arrays

int nums1[] = {1,4,7,10,12};
    int nums2[] = {2,3,6,15};
    int n = sizeof(nums1)/sizeof(nums1[0]);
    int m = sizeof(nums2)/sizeof(nums2[0]);
    int k;
    cin>>k;
    int ans=kthElement(nums1,nums2,m,n,k);
    cout<<"K-th Element of two sorted arrays : "<<ans<<" ";




    return 0;
}