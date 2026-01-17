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
    int ans=0;
    vector<int> v(n);
    for(auto &it: v){
      cin>>it;
    }
    
    int x=1e9;
    int y=1e9;
    for(auto it: v){
        if(x>y){
            swap(x,y);
        }
        if(x>=it){
            x=it;
        }
        else if(y>=it){
            y=it;
        }
        else{
            ans++;
            x=it;
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