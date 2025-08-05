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
    string a,b;
    cin>>a>>b;
    int lena=a.length();
    int lenb=b.length();
    int ans=lena+lenb;
    if (lena > lenb) swap(a, b), swap(lena, lenb);
        int cnt=lena+lenb;
        bool is=false;
        for(int i=0; i<lena; i++){
            
            string check=a.substr(i);
            for(int j=check.length(); j>0; j--){
                string real=check.substr(0,j);
            if(b.find(real)!=string::npos){
                cnt=lena+lenb-2*real.length();
                 ans=min(ans,cnt);
                
                break;
              }
            }
        }
       
        cout<<ans<<nline;

    }
   
    
    
    



   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}