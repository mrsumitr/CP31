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
ll xorrc(ll n){
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else return 0;
}

void solve(){
    
ll a,b;
cin>>a>>b;
if(a>1){
    ll xorr=xorrc(a-1);
    if(xorr!=b){
        xorr^=a;
        if(xorr==b){
            cout<<a+2<<nline;
        }
        else{
            cout<<a+1<<nline;
        }
    }
    else{
        cout<<a<<endl;
    }
}
else{
    if(b==0){
        cout<<"1"<<nline;
    }
    else if(b==1){
        cout<<"3"<<nline;
    }
    else{
        cout<<"2"<<nline;
    }
}

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}