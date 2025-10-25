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

    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        if(n%k==0){
            cout<<n<<nline;
        }
        else{
            cout<<k%n<<nline;
        }
    }
    else{
        int cB=1;
        int cA=n;
        
        for(int i=0; i<k; i++){
            cA--;
            if(cA==0){
                cA=n;
            }
            cB++;
            if(cB==n+1){
                cB=1;
            }
            if(cB==cA){
                cB++;
                if(cB==n+1){
                cB=1;
            }

            }
        }
        cout<<cB<<nline;
    }
    
  // this is wrong soln  
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