//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {


    ll n;
    cin>>n;
    vector<ll> v(n),s;
    for(int i=0; i<n; i++) cin>>v[i];
    s=v;
    sort(s.begin(),s.end());
    if(v==s){
        cout<<"0"<<endl;
        return;
    }
    if(v[n-2]>v[n-1] || (v[n-1]<0 && v[n-2]<0)){
        cout<<"-1"<<nline;
        return;
    }
    cout<<n-2<<nline;
    for(int i=0; i<n-2; i++){
        cout<<i+1<<" "<<n-1<<" "<<n<<nline;
    }
   


    
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