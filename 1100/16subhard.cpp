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
    
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout<<"NO"<<nline;
        return;
    }
    int currsum=1;
    for(int i=1; i<n; i++){
       if(v[i]>currsum){
        cout<<"NO"<<nline;
        return;
       }
       else{
        currsum+=v[i];
       }

    }

    cout<<"YES"<<nline;
       
        
   // there is a catch, we need to cal all possiblities, if currsum<=v[i]
   // then it is possible,  and we will update this currsum+=v[i];


    
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}