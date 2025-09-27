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
    ll rn=(n*(n-1))/2;
   

    vector<ll> v(rn);
    for(int i=0; i<rn; i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll x = n-1, i = 0;
 
        while(x > 0) {
            cout<<v[i]<<" ";
 
            i += x;
            x--;
        }
        cout<<"1000000000"<<endl;





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