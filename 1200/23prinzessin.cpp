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

string prevString(string s) {
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'a') {
            s[i] = 'z'; // borrow from previous
        } else {
            s[i]--;     // reduce this char
            break;
        }
    }
    return s;
}
string nextString(string s) {
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'z') {
            s[i] = 'a';  // wrap and carry left
        } else {
            s[i]++;      // increment and stop
            return s;
        }
    }
    // if all were 'z', add new 'a' at front or 'a' at end
    return "a" + s;
}

void solve() {

    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<string> v;
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            string snew=s.substr(i,j-i+1);
            v.push_back(snew);
        }
    }
    sort(v.begin(),v.end());

    string cur=v.front();
    if(cur=="a"){
        cout<<cur<<nline;
    }
    string ans=prevString(cur);
    ans=nextString(ans);
    cout<<ans<<endl;
    
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