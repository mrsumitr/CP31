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
    ll a,b;
    cin>>a>>b;
    ll opn=INT_MAX;
    for(int addi=0; addi<32; addi++){
        ll ans=addi;
        ll copy_b=b+addi;
        if(copy_b==1) continue;
        ll copy_a=a;
        while(copy_a!=0){
            ans++;
            copy_a/=copy_b;
        }
        opn=min(opn,ans);
    }
    
    cout<<opn<<endl;

        

    }
    



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}