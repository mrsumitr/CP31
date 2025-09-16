//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>


void solve(){
    ll n;
    cin>>n;
    vector<int> a(n),au(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>au[i];
    }
    int change1=-1;
    int change2=-1;
    for(int i=0; i<n; i++){
        if(a[i]!=au[i]){
            if(change1==-1){
                change1=i;
            }
            else{
                change2=i;
            }
        
        }
    }
    while(change1>0){
        if(au[change1]>=au[change1-1]){
            change1--;
        }
        else{
            break;
        }
    }
    while(change2<n-1){
        if(au[change2]<=au[change2+1]){
            change2++;
        }
        else{
            break;
        }
    }
    cout<<change1+1<<" "<<change2+1<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}