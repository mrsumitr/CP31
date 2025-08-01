#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>

void solve(){
  ll x,n;
  cin>>x>>n;
if(n==0 || n%4==0){
  cout<<x<<endl;
  return;
}
if(x%2==0){
  ll digit=n%4;
  
  if(digit==1){
    cout<<x-n<<endl;
    return;
  }
  if(digit==2){
    cout<<x+1<<endl;
    return;
  }
  if(digit==3){
    cout<<x+n+1<<endl;
    return;
  }

}
else{

ll digit=n%4;
  if(digit==1){
    cout<<x+n<<endl;
    return;
  }
  if(digit==2){
    cout<<x-1<<endl;
    return;
  }
  if(digit==3){
    cout<<x-n-1<<endl;
    return;
  }
}
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}