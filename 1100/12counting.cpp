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

int bs(vector<ll> &v, ll ele) {
    int start = 0;
    int end = v.size();
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (v[mid] <= ele) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start; // index of first element > ele
}

void solve(){
    ll mod=1e9+7;
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll ans=1;
    for(int i=0; i <n; i++){
        ll ele=b[i];
        ll num=n-bs(a,ele)-i;
        if(num<1){
            cout<<"0"<<endl;
            return;
        }
        ans=(ans*num)%mod;

    }
    cout<<ans<<endl;



}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}