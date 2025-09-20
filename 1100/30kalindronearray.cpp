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

bool iskalin(ll s, ll e, ll &ele, vector<ll> &v){
    while(s<e){
        if(v[s]==ele){
            s++;
            continue;
        }
        if (v[e] == ele) {
            e--;
            continue;
        }
        if(v[s]!=v[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;


}
void solve(){


   ll n;
   cin>>n;
   vector<ll> v(n);
   for(int i=0; i<n; i++){
    cin>>v[i];
   } 
    ll s=0;
    ll e=n-1;
    while(s<e && v[s]==v[e]){
        s++;
        e--;
    }
    if(s>=e){
        cout<<"YES"<<endl;
        return;
    }
    if(iskalin(s,e,v[s],v)|| iskalin(s,e,v[e],v)){
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