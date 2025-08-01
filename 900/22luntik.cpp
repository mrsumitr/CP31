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
  ll n;
  cin>>n;
  ll sum=0;
  int zero=0;
  int one=0;
  vector<ll> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    
}
for(int i=0; i<n; i++){
    if(v[i]==0){
        zero++;
    }
    else if(v[i]==1){
        one++;
    }
}
ll ways=pow(2,zero)*one;

cout<<ways<<endl;




}

   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}