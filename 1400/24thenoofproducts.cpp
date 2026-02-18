#include<bits/stdc++.h>
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
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> pSum(n+1,0);
    for(int i=0; i<n; i++){
        pSum[i+1]=pSum[i]+(v[i]<0 ? 1 : 0);
    }
    ll even=1;
    ll odd=0;
    ll ans=0;
    for(int i=1; i<=n; i++){
        if(pSum[i]%2==0){
            ans+=even;
            even++;
        }
        else{
            ans+=odd;
            odd++;
        }
    }
    ll 
    cout<<n*(n+1)/2-ans<<" "<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}