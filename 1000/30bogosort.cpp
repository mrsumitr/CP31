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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}