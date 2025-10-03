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
    vector<ll> x(n);
    vector<ll> y(n);
    vector<ll> pos,neg;
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>y[i];
    for(int i=0; i<n; i++){
        if(y[i]-x[i]<0){
            neg.push_back(abs(y[i]-x[i]));
        }
        else{
            pos.push_back(y[i]-x[i]);
        }
    }
    sort(pos.rbegin(),pos.rend());
    sort(neg.rbegin(),neg.rend());
    ll ans=0;
    if(pos.empty()){
        cout<<"0"<<endl;
        return;
    }
    if(neg.empty()){
        cout<<pos.size()/2<<endl;
        return;
    }
    
    int posi=0;
    int negi=0;
    while(posi<pos.size() && negi<neg.size()){
        if(pos[posi]>=neg[negi]){
            ans++;
            negi++;
            posi++;
        }
        else{
            negi++;
        }
    }
    int size=pos.size()-posi;
    if(size>0){
        ans+=size/2;

    }
    cout<<ans<<endl;
    

    
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