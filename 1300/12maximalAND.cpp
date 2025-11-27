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
    vector<int> v(n);
    ll ans=0;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=30; i>=0; i--){
      int temp=k;
      bool flag=true;
      int di=1<<i;
      for(int j=0; j<n; j++){
         if((di&v[j])==0){
            if(temp){
              temp--;
            }
            else{
              flag=false;
              break;
            }
         }
      }
      if(flag){
        k=temp;
        ans+=di;
      }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}