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


void solve(){
    ll n,x;
    cin>>n>>x;
    ll val=0;
    vector<int> a(n),b(n),c(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    ll kn=0;
    for(int i=0; i<n; i++){
        if((~x&a[i])!=0 ) break;
       if ((kn | a[i]) <= x) kn |= a[i];
    }
     for(int i=0; i<n; i++){
        if((~x&b[i])!=0 ) break;
        if ((kn | b[i]) <= x) kn |= b[i];
    }
     for(int i=0; i<n; i++){
        if((~x&c[i])!=0 ) break;
        if ((kn | c[i]) <= x) kn |= c[i];
    }
    if(kn==x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}