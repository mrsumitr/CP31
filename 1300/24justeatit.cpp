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
   vector<ll> v(n);
   ll usum=0;
   ll mv=INT_MIN;
   for(int i=0; i<n; i++){
    cin>>v[i];
    usum+=v[i];
    mv=max(mv,v[i]);
   }
   if(mv>=usum){
    cout<<"NO"<<endl;
    return;
   }
   ll sum=0;
   ll masum=0;
   int l=0;
   int r=0;
   for(int i=0; i<n; i++){
    sum+=v[i];
    if(sum<=0){
        l=i+1;
        sum=0;
    }
    if(sum>masum){
      r=i;
    }
    masum=max(masum,sum);
   }
   if(l!=0 || r!=n-1){
        if(masum>=usum){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
   }
   else{
    
    cout<<"YES"<<endl;
    
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