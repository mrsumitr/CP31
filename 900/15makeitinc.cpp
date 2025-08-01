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
  ll count=0;
  ll ansss=0;
  vector<ll> v(n);
  vector<ll> s(n);
  vector<ll> test(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  for(int j=0; j<n; j++){
for(int i=1; i<n; i++){
    if(v[i]==0 && i!=0){
        cout<<"-1"<<nline;
        return;
    }
    if(v[i-1]>=v[i]){
        while(v[i-1]>=v[i]){
            count++;
            v[i-1]= v[i-1]>>1;
        }
    }
}
}

for(int i=0; i<n; i++){
    if(v[i]==0){
        ansss++;
    }
}
if(ansss>1){
    cout<<"-1"<<nline;
}
else{
    cout<<count<<nline;
}



}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}