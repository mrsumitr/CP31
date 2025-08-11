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
void recur(unordered_map<string,int> &mp,string s1){
    mp[s1]++;

}

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    unordered_map<char,int> mp;
    vector<int> unique(n+1,0);
    for(int i=0; i<n; i++){
        mp[s[i]]++;
        unique[i+1]=mp.size();
        ans+=unique[i+1];
    }
    
    cout<<ans<<endl;
    
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
} 