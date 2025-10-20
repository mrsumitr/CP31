//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
#include<set>
void solve() {

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntz=0;

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            cntz++;
        }
    }
    if(cntz%2==0 || cntz==1){
        cout<<"BOB"<<nline;
    }
    else{
        cout<<"ALICE"<<nline;
    }
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}