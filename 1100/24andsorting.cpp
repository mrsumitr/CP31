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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }vector<int> ans;

    if(n==2){
        cout<<"0"<<endl;
        return;
    }

    if(v[0]!=0){
        cout<<"0"<<endl;
        return;
    }
    for(int i=1; i<n; i++){
        if(v[i]!=i) ans.push_back(i);

    }
    int ma=ans[0];
    for(auto it: ans){
        ma=ma&it;
    }
    cout<<ma<<endl;
    
   //int this we have to find those number who is not at thier postion, after that find &
   // of all that numbers. 
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}