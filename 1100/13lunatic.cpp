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
#include<numeric>


void solve(){
   ll n;
   cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll mod=0;
    int s=0;
    int e=n-1;
    while(s<e){
        mod=__gcd(mod,abs((v[e]-v[s])));
        s++;
        e--;
        
    }
    cout<<mod<<endl;
}



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}