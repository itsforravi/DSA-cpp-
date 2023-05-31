#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

// Count Number

// int count(int n){
//   int cnt=0;
//   while(n>0){
//     n=n/10;
//     cnt+=1;
//   }
//   return cnt;
// }

// int count(int n){
//   int cnt=(int)(log10(n)+1);
//   return cnt;
// }


// Revrse the number

// int reverse(int n){
//   int revNum=0;
//   while (n>0)
//   {
//     int ld=n%10;
//     revNum=(revNum*10)+ld;
//     n=n/10;
//   }
//   return revNum;
  
// }





int palindrome(int n){
  int revNum=0;
  
  while (n>0)
  {
    int ld=n%10;
    revNum=(revNum*10)+ld;
    n=n/10;
  }
  return revNum;
  
}
void printdivision(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0) {
      cout<< i<<" ";
    }
  }
}
//sorted order
void print(int n){
  vector<int> ls;
  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
      ls.push_back(i);
      if((n/i)!=1){
        ls.push_back(n/i);
      }
    }
  }
  sort(ls.begin(),ls.end());
  for(auto it:ls) cout<<it<< " ";
}

// int gcd(int a,int b){
//   while(a>0 && b>0) {
//     if(a>b) a=a%b;
//     else b=b%a;
//   }
//   if(a==0) return b;
//   else return a;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

// palindrome 

  int a=45,b=10;
  // cin>> a>>b;
  // int dup=n;
  // int revNum=palindrome(n);
  
  // if(dup==revNum){
  //   cout <<"Palindrome Number "<<endl;
  // }
  // else{
  //   cout <<"Not palindrome Number "<<endl;
  // }
  //  cout<< "Number of digits in "<<n<<" is "<<count(n);
  //  cout<< "Number of digits in "<<n<<" is "<<reverse(n);
  //  cout<< "Number of digits in "<<n<<" is "<<palindrome(n);
  
  // Prime Number
//  int cunt=0;
//  for(int i=1;i*i<=n;i++){
//   if(n%i==0){
//     cunt++;
//     if((n/i)!=i)
//     cunt++;
//   }
//  }
//  if (cunt==2) cout<< "Ture";
//  else cout<<"False";
  
  
  // print(n);
  
  // GCD
  int gcd(int a,int b){
  while(a>0 && b>0) {
    if(a>b) a=a%b;
    else b=b%a;
  }
  if(a==0) return b;
  else return a;
}

  
  return 0;
}