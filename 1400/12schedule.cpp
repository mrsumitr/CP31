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

bool check(int mid, vector<int> &freq){
    int n=freq.size();
    ll extra=0;
    ll need=0;
    for(int i=1; i<n; i++){
      if(freq[i]<=mid){
        extra+=(mid-freq[i])/2;
      }
      else{
        need+=(freq[i]-mid);
      }
    }

    if(need>extra){
      return false;
    }
    return true;
}
void mrsumit() {
    int n,m;
    cin>>n>>m;
    vector<int> freq(n+1,0);
    for(int i=0; i<m; i++){
      int data;
      cin>>data;
      freq[data]++;
    }
    int lo=1;
    int hi=2e5;
    int ans=hi;
    while(lo<=hi){
      int mid=(lo+hi)/2;
      if(check(mid,freq)){
          ans=mid;
          hi=mid-1;
      }
      else{
        lo=mid+1;
      }
    }

    cout<<ans<<nline;
    


    
    
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