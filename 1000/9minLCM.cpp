#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>
#include<numeric>

void solve(){
  ll n;
   cin>>n;
   if(n==2){
    cout<<"1 1"<<endl;
    return; 
   }
if(n%2==0){
   cout<<n/2<<" "<<n/2<<endl;
    }
else{
 ll ans_a=1;
 ll ans_b=n-1;
 for(ll fac=2; fac*fac<=n; fac++){
    if(n%fac==0){
        ans_a=n/fac;
        ans_b=n-ans_a;
        break;
    }
 }
 cout<<ans_a<<" "<<ans_b<<endl;
    }
    

}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}