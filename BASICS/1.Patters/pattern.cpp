#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i <<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout <<j<<"";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
           cout<<" "; 
        }
        for (int j=0;j<2*i+1;j++){
          cout<<"*";
        }
        for(int j=0; j<n-i-1;j++){
             cout<<" "; 
        }
        cout<<endl; 
    }
     
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
           cout<<" "; 
        }
        for (int j=0;j<(2*n-(2*i + 1));j++){
          cout<<"*";
        }
        for(int j=0; j<i;j++){
             cout<<" "; 
        }
        cout<<endl; 
    }
     
}
void pattern9(int n){
   //combination of 7 and 8 call both 
   //together them print that what you whant.
        for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
           cout<< " "; 
        }
        for (int j=0;j<2*i+1;j++){
          cout<< "*";
        }
        for(int j=0; j<n-i-1;j++){
             cout<< " "; 
        }
        cout<< endl; 
    }

  for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
           cout<< " "; 
        }
        for (int j=0;j<(2*n-(2*i + 1));j++){
          cout<< "*";
        }
        for(int j=0; j<i;j++){
             cout<< " "; 
        }
        cout<< endl; 
    }
}
void pattern10(int n){
    for(int i=1;i<=(2*n-1);i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<< "*";

        }
        cout<< endl;
    }
}
void pattern11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i % 2==0) start= 1;
        else start= 0;
        for(int  j=0;j<=i;j++){
            cout<< start ;
            start= 1-start;
        }
        cout<< endl;
    }
}
void pattern12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout <<j;
        }
        cout<< endl;
        space-=2;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<< endl;
    }
}
void pattern14(int n){
    for (int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<< endl;
    }
}
void pattern15(int n){
    for (int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<< endl;
    }
}
void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";

        }
        cout<< endl;
    }
}
void pattern17(int n){
    for(int i=0;i<n;i++){
      for(int j=0 ;j<n-i-1;j++){
        cout<<" ";
      }
      char ch='A';
      int breakpoint=(2*i+1)/2;
      for(int j=1;j<=2*i+1;j++){
        cout<<ch<< "";
        if(j<=breakpoint) ch++;
        else ch--;
      }
      for(int j=0 ;j<n-i-1;j++){
        cout<< " ";
      }
      cout<< endl;
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<< " ";
        }
        cout<< endl;
    }
}
void pattern19(int n){
    int inis=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
         inis +=2;
        cout<< endl;
       
    }
    inis=2*n-2;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
         inis -=2;
        cout<< endl;
       
    }
}
void pattern20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
       int star=i;
       if(i>n) star=2*n-i;
       //star

       for(int j = 1;j<=star;j++){
        cout<< "*";
       }
    //    space
    for(int j=1;j<=spaces;j++){
        cout<< " ";
    }
    //star
    for(int j=1;j<=star;j++){
        cout<< "*";
       }
        cout<< endl;
       if(i<n) spaces-=2;
       else spaces +=2;
      
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<< endl;
    }
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}

void fun(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    fun(i+1,arr,n);
}


void Selection_Sort(int arr[],int n){
  for(int i=0;i<=n-2;i++){
    int mini=i;
    for(int j=i;i<n-1;j++){
        if(arr[j]<arr[mini]){
       mini=j;
    }}
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
  }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     fun(0,arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    // Selection_Sort
// int n;
// cin >> n;
// int arr[n];
// for(int i=0;i<n;i++) cin >>arr[i];

// Selection_Sort(arr,n);
// for(int i=0;i<n;i++) {
//   cout<< arr[i]<<" ";
// }


//  int t;
//  cin>>t;
//  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    // pattern1(n);
    // pattern2(n);
    //  pattern3(n);
    //   pattern4(n);
       pattern5(n);
    //   pattern6(n);
    //   pattern7(n);
    //   pattern8(n);
// pattern9(n);
// pattern10(n);
// pattern11(n);
// pattern12(n);
// pattern13(n);
// pattern14(n);
// pattern15(n);
// pattern16(n);
// pattern17(n);
// pattern18(n);
// pattern19(n);
// pattern20(n);
// pattern21(n);
// pattern22(n);

// }
return 0;
}