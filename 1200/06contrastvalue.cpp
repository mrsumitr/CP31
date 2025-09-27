//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll cont=0;
    for(int i=1; i<n; i++){
        cont+=abs(v[i]-v[i-1]);
    }
    if(cont==0){
        cout<<"1"<<endl;
        return;
    }
    if(n==2){
        cout<<"2"<<endl;
        return;
    }
    vector<ll> a;
    a.push_back(v[0]);
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i-1]) a.push_back(v[i]);
    }
    v=a;
   
    ll ans = 2; // first + last
    
for (int i = 1; i < v.size() - 1; i++) {
    if ((v[i] > v[i-1] && v[i] > v[i+1]) || // crest
        (v[i] < v[i-1] && v[i] < v[i+1])) { // valley
        ans++;
    }
}
cout << ans << "\n";

 
    
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
}g