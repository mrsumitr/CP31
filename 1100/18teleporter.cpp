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
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        ll data;
        cin>>data;
        v[i]=data+i+1;
    }
    
    sort(v.begin(),v.end());
    ll points=0;
    ll maxtele=0;
    for(int i=0; i<n; i++){
        points+=v[i];
        if(points>c){
            break;  
        }
        else{
            maxtele++;
        }
       
    }
    cout<<maxtele<<endl;


}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}