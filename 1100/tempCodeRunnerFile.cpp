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
    string s;
    cin>>s;
    int maxone=0;
    int cnt=0;
    int onef = count(s.begin(), s.end(), '1');

    if (onef == 0) {
        cout << "0\n";
        return;
    }
    if (onef == 1) {
        cout << "1\n";
        return;
    }
    for(int i=0; i<=2*n; i++){
        if(s[i%n]=='1'){
            cnt++;
        }
        else{
            maxone=max(cnt,maxone);
            cnt=0;
        }
    }   
    maxone=min(cnt,n);
    cout<<(maxone-1)*2<<nline;



}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}