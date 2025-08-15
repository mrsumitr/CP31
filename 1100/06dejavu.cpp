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
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> b(q);
    for(int i=0; i<q; i++){
        cin>>b[i];
    }
    ll prev=31;
    for(auto it: b){
        if(it>=prev) continue;
        int power=1<<it;
        for(int i=0; i<n; i++){
            if(v[i]%power==0) v[i]=v[i]+(1<<it-1);
        }
        prev=it;
    }
    for(int i=0; i<n; i++){
      
      cout<<v[i]<<" ";
    }
    cout<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}