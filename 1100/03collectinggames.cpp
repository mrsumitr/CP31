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
    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    sort(v.begin(),v.end());
    
    vector<int> ans(n);
    int s=0;
    int e=1;
    ll sum=v[0].first;
    int ele=0;
    while(s<=e && s<n && e<n){
        
       if(sum>=v[e].first){
        sum+=v[e].first;
        ele++;
        e++;
       }
       else{
        while(s<e-1){
            ans[v[s].second]=ele;
            s++;
        }
        ans[v[s].second]=ele;
        sum+=v[e].first;
        ele++;
        s++;
        e++;
       }
       
    }
    while(s<n){
        ans[v[s].second]=ele;
        s++;
       }
       for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;
// sort(v.begin(),v.end(),[](const pair<int,int> &a,pair<int,int> &b){
//         if(a.first==b.first)
//             return b.second>a.second;
//         return a.first<b.first;
// });
    }


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}