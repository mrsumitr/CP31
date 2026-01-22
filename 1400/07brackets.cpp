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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool c1=false;
    bool c2=false;
    vector<int> ans;
    if(n%2){
      cout<<"-1"<<endl;
      return;
    }
    else{
      int a=count(s.begin(), s.end(),')');
      if(a!=n/2){
        cout<<-1<<endl;
        return;
      }
      else{
        int cntl=0;
        int cntr=0;
        
        for(int i=0; i<n; i++){
          if(s[i]==')'){
            if(cntl==0){
              ans.push_back(2);
              c1=true;
              cntr++;
            }
            else{
              cntl--;
              c2=true;
              ans.push_back(1);
            }
          }
          else{
            if(cntr==0){
              cntl++;
              c2=true;
              ans.push_back(1);
            }
            else{
              cntr--;
              c1=true;
              ans.push_back(2);
            }
          }
        }
      }
    }
    if(c1 && c2){
        cout<<"2"<<endl;
        for(auto it: ans){
        cout<<it<<" ";
        }
        cout<<endl;
    
    }
    else{
        cout<<"1"<<endl;
        for(int i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
        
        
        
    }
    
    
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