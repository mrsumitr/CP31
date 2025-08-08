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
   ll x,y,k;
   cin>>x>>y>>k;
   ll ans=k;
   ll req=(y+1)*k-1;
    x--;
    if(req%x==0){
        cout<<ans+req/x<<endl;
    }
    else{
        cout<<ans+req/x+1<<endl;
    }
   }
   



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}