//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int mod=1e9+7;
void mrsumit() {
    int n;
    cin>>n;
    ll ans=0;
    if(n==1){
        cout<<4<<endl;
        return;
    }
    if(n%2){
        ans=2*(n/2+2)*(n/2+1);
    }
    else{
        ans=(n/2+1)*(n/2+1);
    }
    cout<<ans<<'\n';
    // use comination to solve this, like n/2  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}