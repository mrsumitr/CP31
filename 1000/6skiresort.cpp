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

void solve(){
  ll n,k,q;
  cin>>n>>k>>q;
  vector<ll> v(n);
  for(ll i=0; i<n; i++){
    ll data;
    cin>>data;
    if(data>q){
        v[i]=0;
    }
    else{
        v[i]=1;
    }
  }
  ll ways=0;
  ll count=0;
  for(ll i=0; i<n; i++){
    if(v[i]==1){
        count++;
    }
    else{
        if(count>=k){
            ll da=count-k+1;
            ways=ways+da*(da+1)/2;
            count=0;
        }
        count=0;
    }
  }
  if(count>=k){
            ll da=count-k+1;
            ways=ways+da*(da+1)/2;
            count=0;
        }
    cout<<ways<<endl;

}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}