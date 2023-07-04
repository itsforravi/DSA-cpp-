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
vector<int> arr={1,2,3,4,5,6,7,8,9,10};
int cap=15;
int ans=leastWeightCapacity(arr,cap);
if(ans==-1){
    cout<<"We cannot  Ship Packages within Days\n";
}
else{
    cout<<"We can Ship Packages within : "<<ans<<" days ";
}

    return 0;
}