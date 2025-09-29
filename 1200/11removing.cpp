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

    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    vector<bool> v(n+1,false);
   
   for(int i=1; i<=n; i++){
    for(int j=i; j<=n; j+=i){
        if(s[j-1]=='1'){
            break;
        }
        else{
            if(!v[j]){
                ans+=i;
                v[j]=true;
            }
        }
    }
   }
    cout<<ans<<endl;

    
}
/*
solution 2nd
void solve() {

    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    vector<int> v(n+1,0);
    for(int i=0; i<n; i++){
        if(s[i]=='1') v[i+1]=1;
    }
    vector<int> a;
    a=v;
    
        
        for(int i=1; i<=n; i++){
            ll index=1;
            ll in=i*index;
        while(in<=n){
            
            if(a[in]==0){
                if(v[in]==0){
                        ans+=i;
                        v[in]=1;
                        
                }  
            }
            else{
                break;
            }
            
            index++;
            in=i*index;
        }
        
}
    
    cout<<ans<<endl;
    

    
}
*/
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