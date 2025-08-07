//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>


void solve(){
  int n,m;
  cin>>n>>m;
  int neg=0;

  ll sum=0;
  int minv=INT_MAX;
  vector<vector<int>>v;
  for(int i=0; i<n; i++){
    vector<int> ds(m);
    for(int j=0; j<m; j++){
        cin>>ds[j];
        sum+=abs(ds[j]);
        minv=min(minv,abs(ds[j]));
        if(ds[j]<0) neg++;
            }
    v.push_back(ds);
  }
  
if(neg%2==0){
    cout<<sum<<nline;
}
else{
 cout<<sum-2*minv<<endl;
}
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}