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

    string s;
    cin>>s;
    ll n=s.length();
    ll maxone=0;
    ll cnt=0;
    ll onef = count(s.begin(), s.end(), '1');

    if (onef == 0) {
        cout << "0\n";
        return;
    }
    if (onef == 1) {
        cout << "1\n";
        return;
    }
    if(onef==n){
        cout<<n*n<<endl;
        return;
    }
    for(int i=0; i<=2*n; i++){
        if(s[i%n]=='1'){
            cnt++;
        }
        else{
            maxone=max(cnt,maxone);
            cnt=0;
        }
    }   
    if(maxone==1){
        cout<<"1"<<endl;
        return;
    }
    maxone=max(cnt,maxone);
    ll ans=0;
    int i=1;
    while(maxone-1>0){
        maxone--;
        i++;
        ans=max(ans,maxone*i);
    }
    cout<<ans<<endl;



}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}