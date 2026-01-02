//#include<bits/stdc++.h>
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
    int m,x,n;
    cin>>m>>x>>n;
    int l=x;
    int r=x;
    for(int i=0; i<m; i++){
        int le,ri;
        cin>>le>>ri;
        if(le<=l && ri>=l){
            l=min(l,le);
        }
        if(le<=r && ri>=r){
            r=max(r,ri);
        }
    }
    cout<<r-l+1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}