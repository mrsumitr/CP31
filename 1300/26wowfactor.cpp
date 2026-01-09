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
    string s;
    cin>>s;
    ll n=s.length();
    ll cnt=0;
    ll cu=0;
    ll ans=0;
    for(int i=0; i<n; i++){
      if(s[i]=='v'){
        cu++;
      }
      else{
        if(cu>1){
            cnt+=cu-1;
        }
        cu=0;
      }
    }
    if(cu>1){
      cnt=cnt+cu-1;

    }
    cu=0;
    
    ll cal=0;
    for(int i=0; i<n; i++){
        if(s[i]=='v'){
          cu++;
        }
        else{
          if(cu>1){
            cal+=cu-1;
        }
          cu=0;
          ll ot=cnt-cal;
          ans=ans+ot*cal;
        }
    }
    cout<<ans<<'\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    // cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}