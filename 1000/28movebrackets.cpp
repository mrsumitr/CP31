//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int dis=0;
    int plus=0;
    for(int i=0; i<n; i++){
        if(s[i]='('){
            plus++;
        }
        else{
            if(plus>0){
                plus--;
            }
            else{
                dis++;
            }
        }

    }
    cout<<dis<<endl;
}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}