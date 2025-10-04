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

    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0; i<m; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    vector<int> diff;
    for(int i=1; i<m; i++){
        int data=v[i]-v[i-1]-1;
        if(data) diff.push_back(data);
        
    }
    int last=v[0]-1+n-v[m-1];
    if(last) diff.push_back(last);

    int size=diff.size();

    sort(diff.rbegin(),diff.rend());
    ll rem=0;
    for(int i=0; i<size; i++){
        int add=4*i;
        if(diff[i]-add>1){
            rem+=diff[i]-add-1;
        }
        else if(diff[i]-add==1){
            rem+=1;
        }
        else{
            break;
        }
    }
    cout<<n-rem<<endl;



    
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