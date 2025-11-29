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
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> ans;
    int gc=0;

    for(int i=0; i<32; i++ ){
        
        int bit=1<<i;
        int cnt=0;
        for(int j=0; j<n; j++){
            if(v[j]&bit){
                cnt++;
            }
        }
        if(gc){
            gc=__gcd(gc,cnt);
        }
        else{
            gc=cnt;
        }
    }
    if (gc == 0) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << nline;
    return;
}
    for(int i=1; i<=gc; i++){
        if(gc%i==0){
            ans.push_back(i);
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<nline;

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