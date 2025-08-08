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
bool check(ll n){
    set<ll> digits;
    
    string s=to_string(n);
    for(auto it: s){
       int num=it-'0';
        if(num!=0) digits.insert(num);
    }
    

    for(auto i: digits){
        if(n%i!=0) return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    bool div=false;
    div=check(n);
    while(!div){
        n++;
        div=check(n);
    }
    cout<<n<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}