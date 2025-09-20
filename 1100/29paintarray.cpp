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

    ll gcd1=v[0];
    ll gcd2=v[1];
    for(int i=0; i<n; i+=2){
        gcd1=__gcd(gcd1,v[i]);
    }
    for(int i=1; i<n; i+=2){
        gcd2=__gcd(gcd2,v[i]);
    }
    bool c1=false;
    bool c2=false;
    for(int i=1; i<n; i+=2){
        if(v[i]%gcd1==0){
            c1=true;
            break;
        }
    }
    for(int i=0; i<n; i+=2){
        if(v[i]%gcd2==0){
            c2=true;
            break;
        }
    }
    if(c1 && c2){
        cout<<"0"<<endl;
        return;
    }
    if(c1 ){
        cout<<gcd2<<endl;
        return;
    }
    if(c2){
        cout<<gcd1<<endl;
        return;
        
    }
    else{
        cout<<gcd1<<endl;
    }
   

}

   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}