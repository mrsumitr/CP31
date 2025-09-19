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
    unordered_map<char,int> mp;
    string s;
    cin>>s;
    string sym="";
    int n=s.length();
    bool c=true;
    for(auto ch: s){
        mp[ch]++;
        if(mp.size()>1){
            for(auto it: mp ){
                if(it.second>1){
                    c=false;
                    break;
                }
            }
            if(!c){
                    break;
                }
        }
        sym+=ch;
    }
    int le=sym.length();
    for(int i=0; i<n; i++){
        if(s[i]!=sym[i%le]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
// in this question, there is one repeating substring, if string s, is not repeat of that sym
//  then ans is no
// how somesone can think, there is repeating, substring


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}