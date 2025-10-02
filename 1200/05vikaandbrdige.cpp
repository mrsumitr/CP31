//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define nline '\n'

void solve() {

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
         cin>>v[i];
   
    }  
    vector<int> last(k,-1);
    vector<int> max_step(k),max_step2(k);

    for(int i=0; i<n; i++){
        int step=i-last[v[i]-1];
        if(step>max_step[v[i]-1]){
            max_step2[v[i]-1]=max_step[v[i]-1];
            max_step[v[i]-1]=step;

        }
        else if(step>max_step2[v[i]-1]){
            max_step2[v[i]-1]=step;

        }
        last[v[i]-1]=i;
    }

    for(int i=0; i<k; i++){
        int step=n-last[i];
        if(step>max_step[v[i]-1]){
             max_step2[i]=max_step[i];
             max_step[i]=step;
        }
        else if(step>max_step2[i]){
            max_step2[i]=step;
        }
    }
    int ans=1e9;
    for(int i=0; i<k; i++){
        ans=min(ans,max((max_step[i]+1)/2,max_step2[i]));
    }
    cout<<ans<<nline;
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