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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    vector<int> ans;
    ans.push_back(v[0]);
    int s=0;
    int e=1;
    int sign=0;
  //  int hold=v[e];
    while(e<n && s<e){
      if(sign==0){
        if(v[s]>v[e]){
          sign=-1;
        }
        else{
          sign=1;
        }
        s++;
        e++;
      }
      else{
        if(sign==-1){
          if(v[s]>v[e]){
          e++;
          s++;
          }
        else{
          ans.push_back(v[s]);
          sign=1;
        }
      }
      else{
        if(v[s]<v[e]){
          e++;
          s++;

        }
        else{
          ans.push_back(v[s]);
          sign=-1;
          }
        }
      }
    }
    ans.push_back(v[n-1]);
    cout<<ans.size()<<endl;
    for(auto it: ans){
      cout<<it<<" ";
    }
    cout<<nline;
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