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
    ll n;
    cin>>n;
    bool c=false;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            c=true;
            ll div=n/i;
            ll f1=i-1;
            ll f2=1;
            cout<<div*f2<<" "<<div*f1<<nline;
            return;
        }
    }
    if(!c){
        cout<<1<<" "<<n-1<<nline;
        return;
    }
    
    
    
    //cout<<fa<<" "<<fb<<nline;
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