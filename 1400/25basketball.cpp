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
// ll rec(vector<vector<int>> &dp, vector<vector<int>> &v, int last, int line){
//     if(line==0){
//         ll maxi=0;
//         for(int i=0; i<2; i++){
//             if(i!=last){
//                 maxi=max(maxi,v[0][i]);
//             }
//         }
//         return maxi;
//     }
//     if(dp[line][last]!=-1){
//         return dp[line][last];
//     }
//     ll maxi=0;
//     for(int i=0; i<2; i++){
//         if(i!=last){
//             ll points=dp[line][i]+rec(dp, v, i, line-1);
//             maxi=max(points,maxi);
//         }
//     }
//     return dp[line][last]=maxi;

// }
void mrsumit() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    vector<ll> dp1(n), dp2(n);
    dp1[0]=a[0];
    dp2[0]=b[0];
    for(int i=1; i<n; i++){
        dp1[i]=max(dp1[i-1], a[i]+dp2[i-1]);
        dp2[i]=max(dp2[i-1], b[i]+dp1[i-1]);
    }   
    cout<<max(dp1[n-1], dp2[n-2])<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}