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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    a[0]=m;
    for(int i=1; i<n; i++){
      cin>>a[i];
    }
    for(int j=0; j<n; j++){
      cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt=0;
    int in=0;
    for(int i=0; i<n; i++){
      if(b[i]!>a[i]){
        cnt++;
      }
      else{
        in++;
      }
    }
    cout<<cnt<<endl;

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