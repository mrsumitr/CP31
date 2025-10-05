//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
// ll bs(vector<ll> &ps,ll day, ll &x,ll s,ll &e){
    
//     while(s<=e){
//         ll mid=(s+e)/2;
//         if(ps[mid]+(mid+1LL)*day>x){
//             e=mid-1;
//         }
//         else if(ps[mid]+(mid+1LL)*day<x){
//             s=mid+1;
//         }
//         else{
//             return mid+1;
//         }
//     }
//     return e+1;
// }
void solve() {

    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    ll ans=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<ll> ps(n,0);
    ps[0]=v[0];
    for(int i=1; i<n; i++){
        ps[i]=ps[i-1]+v[i];
    }
    ll total_packs=0;
    ll day=0;
    for(int k=n; k>0; k--){
        if(ps[k-1]+day*k>x) continue;
        
        ll last_day=(x-ps[k-1])/k;
        
        ll add_day=last_day-day+1;
        if(add_day>0){
        total_packs+=k*add_day;
          day=last_day+1;
        }
      
        
    }
    
    cout<<total_packs<<nline;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // ll day=x-v[0]+1;
    // ll in=0;
    // ll s=0;
    // ll e=n-1;
    // while(day--){
    //     ll item=bs(ps,in,x,s,e);
    //     ans+=item;
    //     in++;
    //     if(in+v[0]>x){
    //         cout<<ans<<nline;
    //         return;
    //     }
    // }
    
    
    
    
    
    
    
    
   


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}