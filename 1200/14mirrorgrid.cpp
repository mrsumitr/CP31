//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans=0;
    vector<vector<int>>c (n,vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!c[i][j]){
                c[i][j]=1;
                int cnt=0;
                if(v[i][j]=='1'){
                    cnt++;
                }
                if(v[j][n-1-i]=='1'){
                    cnt++;
                }
                if(v[n-1-i][n-1-j]=='1'){
                    cnt++;
                }
                if(v[n-1-j][i]=='1'){
                    cnt++;
                }
                c[j][n-1-i]=1;
                c[n-1-i][n-1-j]=1;
                c[n-1-j][i]=1;
                ans+=min(cnt,(4-cnt));
            }
        }
    }
    cout<<ans<<endl;
    
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