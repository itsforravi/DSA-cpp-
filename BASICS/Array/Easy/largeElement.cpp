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

// Second Smallest and Second Largest Element in an array
int secondlargest(vector<int> &a, int n){
    int largest = a[0];
     int slargest = -1;
    for(int i=1 ; i < n ; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
            
        }

    }
    return slargest;
}
int secondsmallest(vector <int> &a,int n){
     int smallest = a[0];
     int ssmallest = INT_MAX;
     for(int i = 1 ;i < n ; i++){
         if(a[i] < smallest){
             ssmallest = smallest;
             smallest = a[i];
         }
         else if(a[i] != smallest && a[i] < ssmallest){
             ssmallest = a[i];
         }
     }
     return ssmallest;
 }


//  Sorted Element
int  sort1(int arr[],int n ){
    for(int i= 1; i<n; i++){
     if(arr[i] >= arr[i-1]){

     }
     else return false;
    }
    return true;
    
}

// Remove Duplicates in-place from Sorted Array
int removeDuplicates(int arr[], int n) {
	int i=0;
	for(int j=1;j<n; j++){
		if(arr[j]!=arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return (i+1);
}

// Left Rotate the Array by One
void leftRotation(int arr[],int n){
     int temp=arr[0];
    for(int i=1;i<n ;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    // return arr;
}

// Rotate array by K elements
// {Brute Force}
// void leftd(int arr[], int n, int d){
//     d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
// }

// {Optimal Solution}
void leftd(int arr[], int n, int d){
  if(n==0) return;
  d=d%n;
  reverse(arr,arr+d);
  reverse(arr+d,arr+n);
  reverse(arr,arr+n);

}


// Move all Zeros to the end of the array
void zero(int a[],int n)
{
    int j=-1;
for(int i=0;i<n;i++){
    if(a[i]==0){
        j=i;
        break;
    }
}
// if(j==-1) return a;
for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
}
// return a;
}

// Linear Search
int linear(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num) return i;
    }
    return -1;
}

// Union of two sorted array
vector < int > sortedArray(int  a[], int b[],int n1,int n2) {
    
    int i=0;
    int j=0;
    vector<int > unionArr;
  while( i<n1 && j< n2){
      if(a[i]<=b[j]){
          if(unionArr.size() ==0 || 
          unionArr.back()!=a[i])
              unionArr.push_back(a[i]);
          
          i++;
      }
      else {
        if (unionArr.size() ==0 || 
        unionArr.back()!=b[j]) 
          unionArr.push_back(b[j]);
        
        j++;
      }
  }

     
      while(j<n2){
        if (unionArr.size() ==0 ||
         unionArr.back()!=b[j]) 
          unionArr.push_back(b[j]);
        
        j++;
      }
       while(i<n1){
          if(unionArr.size()==0 || 
          unionArr.back()!=a[i])
              unionArr.push_back(a[i]);
          
          i++;
      }
      return unionArr;
  }

  // Intersection of two sorted array
//   {Brute force}
  vector<int> findArrayIntersection
  (int arr1[], int arr2[], int n,int m)
{

	vector<int> ans;
     int vis[m]={0};
	 for(int i=0; i<n; i++){
		 for(int j=0 ;j<m ;j++){
			 if(arr1[i]==arr2[j] && vis[j]==0){
				 ans.push_back(arr1[i]);
				 vis[j]=1;
				 break;
			 }
                         if (arr2[j] > arr1[i]) {
                           break;
                         }
                 }
	 }
	 return ans;
}
  // Intersection of two sorted array
//   {Optimal}
  vector<int> findArrayIntersection1
  (int arr1[], int arr2[], int n,int m)
{
  int i=0;
  int j=0;
	vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr2[j]<arr1[i])
        {
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        
    }
  
	 return ans;
}

// Find the missing number in an array

int missingNumber(int a[], int N) {
    int xor1=0;
    int xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor1=xor1^(i+1);
        xor2=xor2^a[i];

    }
    xor1=xor1^N;
    return xor1^xor2;

}

// Maximum Consecutive ones
int maximunOnes(int arr[] ,int n){
    int maxi=0;
    int cnt=0;
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{ cnt=0;}
    }
    return maxi;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // Largest Element 
   //  vector<int> arr={3,2,4,52,67,17};
   //  int n=6;
   //  int max=largestElement(arr,n);
   //  cout<<"Largest element in the arr " <<max<<" ";
//   vector <int> arr={2,3,1,4,5,6,7};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int sS=secondsmallest(arr,n);
//    int sL=secondlargest(arr,n);
//    cout<< sS<<"";
//    cout<<endl;
//    cout<< sL<<"";
//    cout<<endl;

//  Sorted Element
//   int arr1[] = {1, 2, 3, 4 ,66,5};
//  int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int k= sort1(arr1,n1);
// //   printf("%s",sort(arr, n) ? "True" : "False");
// cout<<k<<" ";

// // Remove Duplicates in-place from Sorted Array
// int arr1[] = {1,1,2,2,2,3,3,4,4,4,5,5};
//  int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int k=removeDuplicates(arr1,n1);
//    for(int i=0;i<k;i++){
//     cout<< arr1[i]<<" ";
//    }
//    cout<<endl;
// cout<<" Number of element that is after remove dublicate "<<k<<" ";


// Left Rotate the Array by One
//  int arr1[] = {1,2,3,4,5,6};
//  int n1=sizeof(arr1)/sizeof(arr1[0]);
//  leftRotation(arr1,n1);
//  for(int i=0;i<n1;i++){
//   cout<<arr1[i]<<" ";
//  }

// Rotate array by K elements
// int n=7;
// int arr[]={3,4,2,5,6,1,7};
// int d=3;

// cout<<"Before Left Rotation " << endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<< " ";
// }
// cout<<endl;

//   leftd(arr,n,d);
//   cout<<"Before Left Rotation " << endl;
//   for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//   }



// Move all Zeros to the end of the array

// int arr[]={1,2,0,0,3,4,0,2,3,22,0,23};
// int n=sizeof(arr)/sizeof(arr[0]);

// cout<<"Before Left Rotation " << endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<< " ";
// }
// cout<<endl;

//   zero(arr,n);
//   cout<<"Before Left Rotation " << endl;
//   for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//   }

// Linear Search
// int arr[]={1,2,3,4,5};

// int n=sizeof(arr)/sizeof(arr[0]);
// int num=4;
// int value=linear(arr,n,num);
// cout<<value<<" ";


// Union of two sorted array
// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int n1=sizeof(a)/sizeof(a[0]);
//   int b[] = {2, 3, 4, 4, 5, 11, 12};
// int n2=sizeof(b)/sizeof(b);
// vector<int> Union=sortedArray(a ,b,n1,n2);
// cout<<"Union of sorted Array "<< endl;
// for(auto & val:Union){
    
//     cout<<val<<" ";
// }


// InterSection of two sorted array
// int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int n=sizeof(arr1)/sizeof(arr1[0]);
//   int arr2[] = {2, 3, 4, 4, 5,6,7,8, 11, 12};
// int m=sizeof(arr2)/sizeof(arr2[0]);
// vector<int> Union= findArrayIntersection1(arr1 ,arr2,n,m);
// cout<<"InterSection of sorted Array "<< endl;
// for(auto & val:Union){
    
//     cout<<val<<" ";
// }

// Find the missing number in an array(Optimal)
// int arr1[] = {1, 2,3,5};
// int n=sizeof(arr1)/sizeof(arr1[0]);
// int k=missingNumber(arr1,n);
// cout<<"Missing Number in the Array "<<endl;
// cout<<k<<" ";

// Maximum Consecutive ones
int arr1[] = {1,1,1,0,0,0,1,1,0,1,1,1,1};
int n=sizeof(arr1)/sizeof(arr1[0]);
int k=maximunOnes(arr1,n);
cout<<"Maximun number in ones in the array = "<<endl;
cout<<k<<" ";
    return 0;
}