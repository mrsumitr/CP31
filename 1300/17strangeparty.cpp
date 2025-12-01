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
    int n,m;
    cin>>n>>m;
    vector<int> c(m);
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<m; i++) cin>>c[i];

    sort(v.rbegin(),v.rend());
 
    int j=0;
    ll sum=0;
    for(int i=0; i<n; i++){
      if(v[i]>j+1){
        sum+=c[j];
        j++;
      }
      else{
        sum+=c[v[i]];
      }
    }

    cout<<sum<<endl;


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