//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void solve() {

    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    map<int,int> mp; 
    for(int i=0; i<n; i++) 
    {

    
    int data;
    cin>>data;
    mp[data]++;
    v[i].first=data;
    v[i].second=i+1;
    
    }
    if(mp.size()==1){
        cout<<"NO"<<nline;
        return;
    }
    sort(v.begin(),v.end());
    int ele2=v.back().first;
    int in2=v.back().second;
    int ele1=v[0].first;
    int in1=v[0].second;
    cout<<"YES"<<nline;
    
    for(int i=1; i<n; i++){
        if(v[i].first==ele1){
            cout<<v[i].second<<" "<<in2<<nline;
        }
        else{
            cout<<v[i].second<<" "<<in1<<nline;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}