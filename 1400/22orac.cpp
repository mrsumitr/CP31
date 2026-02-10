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
    vector<int> v(n+1);
    vector<int> dp(n+1,1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j*j<=i; j++){
            if(i%j==0){
            if(v[i]>v[j]){
                dp[i]=max(dp[i], 1+dp[j]);
                
            }
            if(v[i]>v[i/j]){
            dp[i]=max(dp[i], 1+ dp[i/j]);
            }
            }
        }
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;


    
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