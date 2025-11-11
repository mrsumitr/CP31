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
int bs(vector<int> &a, int target){

    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        mid=s+(e-s)/2;
        if(a[s]>=target){
            s=mid+1;
        }
        else{
            e=mid;
        }

    }
    return e;

        
}
void mrsumit() {

    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> se;
    vector<int> val;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<i+1){
            se.push_back(i+1);
            val.push_back(v[i]);
        }

    }
    ll ans=0;

   sort(val.begin(), val.end()); 

    for (int i = 0; i < se.size(); i++) {
        auto it = upper_bound(val.begin(), val.end(), se[i]);
        ans += (val.end() - it); 
    }
    cout << ans << nline;
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