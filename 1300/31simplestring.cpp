#include<bits/stdc++.h>
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
    string s;
    cin>>s;
    int n=s.length();
    for(int i=1; i<n; i++){
      if(s[i]==s[i-1]){
            char ch='a';
            for(int j=0; j<26; j++){
                if(i+1<n){
                    if(s[i]!=ch && ch!=s[i+1]){
                        s[i]=ch;
                        break;
                    }
                    else{
                        ch++;
                        
                    }
                }
                else{
                    if(s[i]!=ch){
                        s[i]=ch;
                        break;
                    }
                    else{
                        ch++;
                    }
                }
            
        }
      }
    }
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}