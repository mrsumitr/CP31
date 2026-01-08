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
int bs(vector<pair<int,int>> &v,int ele){
  int s=0;
  int e=v.size()-1;
  while(s<=e){
    int mid=(s+e)/2;
    if(v[mid].first==ele){
      return v[mid].second;
    }
    else if(v[mid].first<ele){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
  }
  return -1;
}
void mrsumit() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<pair<int,int>> b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
      int data;
      cin>>data;
      int pos=i+1;
      b[i].first=data;
      b[i].second=pos;
    }
    sort(b.begin(),b.end());
    int mpos=bs(v,a[0]);
    int ans=0;
    for(int i=1; i<n; i++){
      int ele=a[i];
      int pos=bs(v,ele);
      if(pos<=mpos){
        ans++;
      }
      mpos=max(mpos,pos);
    }
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    
    while (t--) {
        mrsumit();
    }
    return 0;
}