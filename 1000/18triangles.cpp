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
    ll w,h;
    cin>>w>>h;
    ll k1;
    cin>>k1;
    vector<int> v1(k1);
    for(int i=0; i<k1; i++){
        cin>>v1[i];
    }
    ll k2;
    cin>>k2;
    vector<int> v2(k2);
    for(int i=0; i<k2; i++){
        cin>>v2[i];
    }
    ll k3;
    cin>>k3;
    vector<int> v3(k3);
    for(int i=0; i<k3; i++){
        cin>>v3[i];
    }
    ll k4;
    cin>>k4;
    vector<int> v4(k4);
    for(int i=0; i<k4; i++){
        cin>>v4[i];
    }
    ll area1=abs(v1[0]-v1.back())*h;
    ll area2=abs(v2[0]-v2.back())*h;
    ll area3=abs(v3[0]-v3.back())*w;
    ll area4=abs(v4[0]-v4.back())*w;
    cout<<max(area1,max(area2,max(area3,area4)))<<nline;
    

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}