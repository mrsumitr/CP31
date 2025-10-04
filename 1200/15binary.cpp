//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'

void solve() {

    int n,s;
    cin>>n>>s;
    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++) 
    {cin>>v[i];
    sum+=v[i];
    }

    if(sum<s){
        cout<<"-1"<<endl;
        return;
    }

    if(sum==s){
        cout<<"0"<<endl;
        return;
    }
    ll cnt=0;
    int i=0;
    int e=n-1;

    while(sum>s){
        if(v[i]==1){
            sum--;
            i++;
            cnt++;
        }
        if(v[e]==1){
            sum--;
            e--;
            cnt++;
        }
        
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