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
    m++;
    int ans=0;
    vector<int> v(n);
    vector<int> a;
    for(int i=0; i<n; i++){
      cin>>v[i];
      string s=to_string(v[i]);
      reverse(s.begin(),s.end());
      int len=s.length();
      int cnt=0;
      for(int j=0; j<len; j++){
        if(s[j]=='0') cnt++;
        else{
          ans=ans+len-cnt;
          break;
        }
      }
      a.push_back(cnt);

    }
    if(ans>=m){
      cout<<"Sasha"<<nline;
      return;
    }
    sort(a.rbegin(),a.rend());
    for(int i=0; i<(int)a.size(); i++){
      if(i%2==1){
        ans+=a[i];
        if(ans>=m){
          cout<<"Sasha"<<nline;
          return;
        }
      }
    }
    cout<<"Anna"<<nline;

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