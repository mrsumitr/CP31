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
  int n;
  cin>>n;
  int count=0;
  vector<ll> v(n);
  vector<ll> s(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]==1){
        count++;
    }
  }
  if(count>1){
    cout<<"-1"<<nline;
    return;
  }
s=v;
sort(s.begin(),s.end());
if(s==v){
    cout<<"0"<<endl;
    return;
}



}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}