#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
bool check(int mid, vector<int> v, int h) {
    sort(v.begin(), v.begin() + mid + 1, greater<int>());

    int b1 = h;
    for (int i = 0; i <= mid; i++) {
        if (v[i] <= b1) {
            b1 -= v[i];
            if (i + 1 <= mid) i++; 
        } else {
            return false;
        }
    }
    return true;
}

void mrsumit() {
    int n,h;
    cin>>n>>h;
    vector<int> v(n);
    // v.resize(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans=0;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
      int mid=(lo+hi)/2;
      if(check(mid,v,h)){
        ans=mid;
        lo=mid+1;
      }
      else{
        hi=mid-1;
      }
    }
    cout<<ans+1<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
   // cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}