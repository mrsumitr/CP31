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
void mrsumit() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    ll len=n;
    ll cov=n;
    vector<int> diff;
    for(int i=1; i<n; i++){
      diff.push_back(v[i]-v[i-1]-1);
    }
    sort(diff.begin(), diff.end());
    int idx=0;
    while(cov>k){
      len+=diff[idx];
      idx++;
      cov--;
    }
    cout<<len<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}