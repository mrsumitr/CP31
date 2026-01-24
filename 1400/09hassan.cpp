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
void mrsumit() {
    int n,m;
    cin>>n>>m;
    vector<int> nearest(n+1,0);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        nearest[b]=max(nearest[b],a);
    }
    
    vector<int> maxLeft(n+1);
    maxLeft[1]=1;
    ll ans=1;
    for(int i=2; i<n+1; i++){
        maxLeft[i]=max(maxLeft[i-1],nearest[i]+1);
        ans+=i-maxLeft[i]+1;
        
    }
    cout<<ans<<endl;
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