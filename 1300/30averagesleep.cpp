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
    double n,k;
    cin>>n>>k;
    double ans=0;
    vector<double> v;
    for(auto &x: v){
      cin>>x;
    }
    double week=n-k+1;
    double sum=0;
    for(int i=0; i<k; i++){
      sum+=v[i];
    }
    ans+=sum/week;
    int s=0;
    int e=k;
    while(e<n){
      sum=sum-v[s]+v[e];

    }


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