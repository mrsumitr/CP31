//#include<bits/stdc++.h>
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
    int hei=0;
    int n,w;
    cin>>n>>w;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> width(21,0);
    for(int i=0; i<n; i++){
        int val=log2(v[i]);
    }
    int cnt=0;
    while(cnt<n){
        int temp=w;
        for(int i=20; i>=0; i--){
            while(width[i]>0 && (1<<i)<=temp){
                temp-=(1<<i);
                width[i]--;
                cnt++;
            }
        }
        hei++;
    }
    


    
    cout<<hei<<endl;
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