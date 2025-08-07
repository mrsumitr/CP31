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
bool primeChecker(ll num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
ll prime(ll n){
    for(int i=n; i<=100000; i++){
    bool isPrime=primeChecker(i);
    if(isPrime) return i;
    }
    return -1;
}

void solve(){
   ll d;
   cin>>d;
   ll n2=prime(1+d);
   ll n3=prime(n2+d);
   ll n4=n2*n3;
  
   cout<<n4<<nline;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}