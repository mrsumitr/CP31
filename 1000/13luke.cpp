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
  


  int n,x;
  cin>>n>>x;
  int minV=INT_MAX;
  int maxV=INT_MIN;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  int ans=0;
  vector<pair<int,int>> segments(n);
  for(int i=0; i<n; i++){
    segments[i]={v[i]-x,v[i]+x};
  } 
  int l=segments[0].first;
  int r=segments[0].second;
  for(int i=1; i<n; i++){
    l=max(l,segments[i].first);
    r=min(r,segments[i].second);
    if(l>r){
        ans++;
        l=segments[i].first;
        r=segments[i].second;
    }
  } 
    cout<<ans<<endl;
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}