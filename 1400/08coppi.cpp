#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int MOD=1e9+7;
vector<vector<int>> adj;
vector<int> dp; 
map<pair<int,int>,int> ind; 
 
void dfs(int vert, int par) {
    for(auto x : adj[vert]) {
        if(x == par) continue;
 
        if(ind[{par, vert}] < ind[{vert,x}]) {
            dp[x] = dp[vert];
        }
        else{
            dp[x] = 1 + dp[vert];
        }
        dfs(x,vert);
    }
}
 
void mrsumit() {
    int n;
    cin>>n;
    adj.assign(n,vector<int>());
    dp.assign(n,0);
    ind.clear();
    for(int i = 0; i < n-1; i++) {
        int a,b;
        cin >> a >> b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        ind[{a,b}] = i;
        ind[{b,a}] = i;
    }
    
    ind[{-1,0}] = -1;
 
    dp[0] = 1;
    dfs(0,-1); 
    cout << *max_element(dp.begin(), dp.end()) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}