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
  ll n,p;
  cin>>n>>p;
  vector<int> a(n);
  vector<int> b(n);
  vector<pair<ll,ll>> ans(n);
  for(int i=0; i<n; i++){
    cin>>ans[i].first;
  }
  for(int i=0; i<n; i++){
    cin>>ans[i].second;
  }
  sort(ans.begin(), ans.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
    return a.second < b.second;
});

ll count=1;
ll cost=p;
for(int i=0; i<n; i++){

  int req=n-count;
  if(req==0){
    break;
  }
  if(req>=ans[i].first){
    count+=ans[i].first;
    cost+=min(ans[i].second*ans[i].first,ans[i].first*p);
  }
  else{
    cost+=min(req*ans[i].second,req*p);
    count+=req;
  }
  }

  cout<<cost<<endl;

 
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}