//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void solve() {

 ll n,k,x;
 cin>>n>>k>>x;
 vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    
    vector<ll> diff;
    for(int i=1; i<n; i++ ){
        if(v[i]-v[i-1]>x){
            ll ele=v[i]-v[i-1];
            if(ele%x==0){
                diff.push_back(ele/x-1);
            }
            else{
                diff.push_back(ele/x);
            }
        }
    }
    ll ans=1+diff.size();
    sort(diff.begin(),diff.end());
    for(auto it: diff){
        if(k>=it){
            ans--;
            k-=it;
        }
        else{
            break;
        }
    }
    cout<<ans<<nline;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    
    while (t--) {
        solve();
    }
    return 0;
}