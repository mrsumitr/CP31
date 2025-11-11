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
void mrsumit() {
    
    vector<vector<int>> v;
    int n;
    cin >> n;
    vector<int> freq(2*1e5+1,0);
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        vector<int> a(k);
        for(int i=0; i<k; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        v.push_back(a);
    }
    for(int i=0; i< n; i++){
        int sz= v[i].size();
        bool flag=1;
        for(int j=0; j<sz; j++){
            int ele = v[i][j];
            if(freq[ele] == 1){
                flag = 0;
                break;
            }
            
        }
        if(flag){
                cout << "YES" << nline;
                return;
            }
    }
    cout << "NO" << nline;


    
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