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
const int mod=1e9+7;

void solve(){
    
    ll n;
    cin>>n;
    ll demdogs=1;
    ll ans=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
    cout<<ans<<endl;
    

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}