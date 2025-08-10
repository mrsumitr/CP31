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
ll bit(ll n) {
    return __builtin_popcountll(n); // counts 1-bits in 64-bit integer
}
    
void solve(){
    
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    if(a==b){
        cout<<ans<<endl;
        return;
    }
    ll cnta=bit(a);
    ll cntb=bit(b);
    if(cnta!=cntb){
        cout<<"-1"<<endl;
        return;
    }
    if (a > b) swap(a, b);
    ll ratio = b / a;
    if (b % a != 0 || (ratio & (ratio - 1)) != 0) {
    cout << -1 << "\n";
    return;
    }
    ll shifts = log2(ratio);
    ans += shifts / 3;
    shifts %= 3;
    ans += shifts / 2;
    shifts %= 2;
    ans += shifts;

       
    cout<<ans<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}