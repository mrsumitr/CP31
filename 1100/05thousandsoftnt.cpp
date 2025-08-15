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
    ll n;
    cin>>n;
    vector<ll> v(n);;
    ll minV=INT_MAX;
    ll ans=0;
    ll maxV=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>v[i];
        minV=min(minV,v[i]);
        maxV=max(maxV,v[i]);
    }
    ans=abs(minV-maxV);
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    ll k=2;
    while(k<=n/2){
        if(n%k==0){
            vector<ll> a;
            int target=n/k;
            ll sum=0;
            ll check=1;
            for(int i=0; i<n; i++){
                sum+=v[i];
                if(check==target){
                    a.push_back(sum);
                    sum=0;
                    check=1;
                }
                else{
                    check++;
                }
            }
            sort(a.begin(),a.end());
            ans=max(ans,(a.back()-a[0]));
        } 
       k++;
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