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
void prime(ll v,ll n,map<int,int> &mp){
                
            for(int j = 2; j*j <= v; j++) { 
                while(v % j == 0) {
                    mp[j]++;
                    v /= j;
                }
            }
            if(v > 1) {
                mp[v]++;
            }

}
void mrsumit() {

    ll n;
    cin>>n;
    vector<ll> v(n);
    map <int,int> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        prime(v[i],n,mp);

    }
        int flag = 1;
        for(auto it : mp) {  
            if(it.second % n != 0) {
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }



    
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