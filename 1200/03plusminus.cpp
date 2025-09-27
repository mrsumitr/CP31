//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long
#define nline '\n'


long long lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b; // divide first to avoid overflow
}
void solve() {


        ll n,x,y;
        cin>>n>>x>>y;
        if(x==y){
            cout<<"0"<<nline;
        }
        ll ans=0;
        ll divx=n/x;
        ll divy=n/y;
        ll divxy=n/(lcm(x,y));
        ll cnt=divx-divy;
        while(cnt--){
            ans+=n;
            n--;
        }
        ll start=1;
        while(divy--){
            ans-=start;
            start++;
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