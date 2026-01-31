#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int MOD=1e9+7;
void mrsumit() {
    ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    int head=0;
    int tail=0;
    int ans=0;
    while(tail<=n-k){
      while(head+1<n && v[head]<(ll)v[head+1]*2){
        head++;
      }
      if(head-tail>=k){
        ans+=head-tail-k+1;
      }
      if(head>tail){
        tail=head+1;
        head=tail;
      }
      else{
        tail++;
        head=tail;
      }
      
    }
    cout<<ans<<endl;

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