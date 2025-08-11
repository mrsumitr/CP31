#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#define nline '\n'
void solve() {

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n==1){
        cout<<"0"<<nline;
        return;
    }
    vector<ll> s;
    ll digit=1;
    
    for(ll i=1; i<n; i++){
        if(v[i]-v[i-1]<=k){
        
            digit++;
        }
        else{
            s.push_back(digit);
            digit=1;
        }
    }
    s.push_back(digit); //i missed last case that what if there is no fault
    sort(s.begin(),s.end(),greater<ll>());
    cout<<n-s[0]<<endl;

}
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}