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
    int n,k;
    cin>>n>>k;
    int ans=1;
    for(int i=1; i*i<=n; i++){
      if(n%i==0){
          if(i<=k){
        ans=i;
          }
          else{
              break;
          }
        int d2=n/i;
        if(d2<=k){
          ans=n/d2;
          cout<<ans<<endl;
          return;
        }
        
            
              }
    }
    cout<<n/ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}