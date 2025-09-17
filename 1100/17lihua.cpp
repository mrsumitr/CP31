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
    ll n,k;
    cin>>n>>k;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        vector<int> a(n);
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        v.push_back(a);
    }
    int cnt=0;
    int otcnt=0;
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int lr=n-i-1;
            int le=n-j-1;
            if(v[i][j]!=v[lr][le]) cnt+=1;
        }
    }
    if(n%2!=0){
        for(int j=0; j<n/2; j++){
            int le=n-j-1;
            if(v[n/2][j]!=v[n/2][le]) cnt+=1;
        }
    }
  if(k<cnt){
      cout<<"NO"<<endl;
      return;
  }
    if (n % 2 == 1) {
        cout << "YES\n";
    }
     else {
        if ((k-cnt) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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