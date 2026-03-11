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
    int n;
    cin>>n;
    vector<bool> good(n);
    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++){
      int parent, type;
      cin>>parent>>type;
      if(type==0) good[i]=true;
      if(parent!=-1){
        adj[parent-1].push_back(i);
      }
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
      if(good[i]) continue;
      bool flag=true;
      for(auto x: adj[i]){
        if(good[x]) flag=false;

      }
      if(flag) ans.push_back(i+1);
    }
    if(ans.size()){
      for(auto it: ans){
        cout<<it<<" ";
      }
      cout<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}