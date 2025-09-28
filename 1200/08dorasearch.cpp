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
    vector<ll> v(n+1,0);
    for(int i=1; i<=n; i++) cin>>v[i];
    int l=1;
    int r=n;
    ll minv=1;
    ll maxv=n;
    
    while(l<r){
        bool chk=false;
        if(r-l<=1){
            cout<<"-1"<<endl;
            return;
        }
        if(v[l]==minv){
            minv++;
            l++;
            chk=true;
        }
        else if(v[l]==maxv){
            l++;
            maxv--;
            chk=true;
        }
        else if(v[r]==minv){
            minv++;
            r--;
            chk=true;
        }
        else if(v[r]==maxv){
            r--;
            maxv--;
            chk=true;
        }
        if(!chk){
            cout<<l<<" "<<r<<endl;
            return;
        }

    }

    if(r-l<=1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<l<<" "<<r<<endl;
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