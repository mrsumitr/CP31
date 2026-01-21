#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int MOD=1e9+7;
int pre[30][200001];

int range_and(int l, int r){
  int ans=0;
  for(int i=0; i<30; i++){
    if(pre[i][r+1]-pre[i][l]==0){
      ans+=(1<<i);
    }
  }
  return ans;
}
void mrsumit() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];

    }

    for(int j=0; j<30; j++){
        pre[j][0]=0;
        for(int i=0; i<n; i++){
          if((1<< j) &v[i]){
            pre[j][i+1]=pre[j][i];
          }
          else{
            pre[j][i+1]=pre[j][i] + 1;
          }
        }
    }
    
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
      int l,k;
      cin>>l>>k;
      l--;
      if(v[l]<k){
        cout<<-1<<' ';
        continue;
      }
    int lo=l;
    int hi=n-1;
    while(lo<hi){
      int mid=(lo+hi+1)/2;
      if(range_and(l,mid)>=k){
        lo=mid;

      }
      else{
        hi=mid-1;
      }
    }
    cout<<lo+1<<' ';
}
    cout<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}