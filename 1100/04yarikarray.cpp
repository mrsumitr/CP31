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
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll sum=v[0];
    ll curr=v[0];
    int s=0;
    int e=1;
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    while(s<e && s<n && e<n){
        sum=max(sum,curr);
        if((v[s]%2==0 && v[e]%2!=0) ||(v[s]%2!=0 && v[e]%2==0)){
            curr+=v[e];
            if(v[e]>=curr){
                curr=v[e];
            }
            s++;
            e++;
        }
        else{
            s++;
            e++;
            curr=v[s];
        }
        sum=max(sum,curr);
        
    }
    cout<<sum<<endl;

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}