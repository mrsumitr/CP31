//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'


int isp(string &s,char re,int &n){
    int i=0;
    int cnt=0;
    int e=n-1;
    while(i<e){
        if(s[i]==s[e]){
            i++;
            e--;
        }
        else{
            if(s[i]!=re && s[e]!=re){
                return 0;
            }
            else if(s[i]==re){
                i++;
                cnt++;
            }
            else{
                e--;
                cnt++;
            }
            
        }
    }
    return cnt;
}

void solve() {

    int n;
    cin>>n;
    string s;
    cin>>s;
   
    int st=0;
    int e=n-1;
    while(st<e){
        if(s[st]==s[e]){
            st++;
            e--;
        }
        else{
        int cnt=0;
        int ans1=isp(s,s[st],n);
        int ans2=isp(s,s[e],n);
        if(ans1==0 && ans2==0){
            cout<<"-1"<<endl;
            return;
        }
        if(ans1!=0 && ans2!=0){
            cout<<min(ans1,ans2)<<endl;
            return;
        }
        if(ans1==0){
            cout<<ans2<<endl;
        }
        else{
            cout<<ans1<<endl;
        }
        return;
        }
    }
    cout<<"0"<<endl;
    
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