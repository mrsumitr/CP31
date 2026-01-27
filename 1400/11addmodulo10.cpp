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
    vector<int> v(n);
    bool ze=false;
    bool five=false;
    bool civ=false;
    for(int i=0; i<n; i++){
      cin>>v[i];
      if(v[i]%10==5){
        five=true;
      }
      else if(v[i]%10==0){
        ze=true;
      }
      else{
        civ=true;
      }
    }
    if(civ && (ze || five)){
      cout<<"NO"<<endl;
      return;
    }
    if((ze==true && five==false) || (ze==false && five==true)){
        for(int i=1; i<n; i++){
          if(v[i]!=v[i-1]){
            cout<<"NO"<<endl;
            return;
          }
        }
        cout<<"YES"<<endl;
        return;
    }
    if(ze && five){
     for(int i=0; i<n; i++){
      if(v[i]%10==5){
        v[i]+=5;
      }
     }
      for(int i=1; i<n; i++){
          if(v[i]!=v[i-1]){
            cout<<"NO"<<endl;
            return;
          }
        }
         cout<<"YES"<<endl;
        return;   
    }
    bool e1=false;
    bool e2=false;
    bool o1=false;
    bool o2=false;
    for(int i=0; i<n; i++){
      int li=v[i]%10;
      int od=v[i]/10;
      od=od%10;
      if(i){
          if(e1 || o2){
             if(li==1 || li==2 || li==4 || li==8){
                 if(od%2!=0){
                     cout<<"NO"<<endl;
                     return;
                 }
             }
             else{
                 if(od%2==0){
                     cout<<"NO"<<endl;
                     return;
                 }
             }
             
             
            
      }
      if(o1 || e2){
           if(li==1 || li==2 || li==4 || li==8){
                 if(od%2==0){
                     cout<<"NO"<<endl;
                     return;
                 }
             }
             else{
                 if(od%2!=0){
                     cout<<"NO"<<endl;
                     return;
                 }
             }
             
             
      }
      } 
      else{
        if(li==1 || li==2 || li==4 || li==8){
            if(od%2==0){
              e1=true;
            }
            else{
              o1=true;
            }
      }
      else{
        if(od%2==0){
          e2=true;
        }
        else{
          o2=true;
        }
      }
      }  
}
  cout<<"YES"<<endl;
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