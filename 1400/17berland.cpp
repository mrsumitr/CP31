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
    unordered_map<int,vector<int>> mp;
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    for(int i=0; i<n; i++){
      cin>>b[i];
    }
    for(int i=0; i<n; i++){
      mp[a[i]].push_back(b[i]);
    }
    vector<ll> ans(n + 1, 0);
    for(auto &it: mp){
      vector<int> &skills = it.second;
      sort(skills.begin(),skills.end(), greater<>());
      int sz=skills.size();
      vector<ll> p(sz+1, 0);
    
      for(int i=0; i<sz; i++){
        p[i+1]=p[i]+skills[i];
      }
      for(int k=1; k<=sz; k++ ){
            int elements_to_take = (sz / k) * k;
            if(elements_to_take > 0) {
            ans[k] += pref[elements_to_take];
      }
    }
    
    
    
    for(int k = 1; k <= n; k++) {
        cout << ans[k] << " ";
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