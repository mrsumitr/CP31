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
int n;
cin>>n;
n--;
ll msb=log2(n);
vector<int> ans;
ll check=pow(2,msb);
for(int i=check-1; i>=0; i--){
    ans.push_back(i);
}
for(int i=check; i<=n; i++){
    ans.push_back(i);
}
for(auto it: ans){
    cout<<it<<" ";
}
cout<<nline;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}