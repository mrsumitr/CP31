//#include<bits/stdc++.h>
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
    int n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0; i<n; i++){
      int k;
      cin>>k;
      vector<int> data(k);
      for(int j=0; j<k; j++){
         cin>>data[j];  
      }
      int minV=data[0]+1;
      int maxP=minV;
      for(int s=1; s<k; s++){
        if((data[s]-s)>=minV){
            minV=data[s]-s+1;
            maxP=minV;
        }
        
      }
      v.push_back({minV,k});
    }

    sort(v.begin(),v.end());
    
   
    ll ans = 0;
    ll power = 0;

    for (auto &p : v) {
        ll need = p.first;
        ll len = p.second;

        if (power < need) {
            ans += (need - power);
            power = need;
        }
        power += len; // defeating cave increases power by k_i
    }

    cout << ans << "\n";
}
      
   










int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}