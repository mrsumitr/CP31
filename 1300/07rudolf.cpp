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

ll n;
cin>>n;
if(n<7){
    cout<<"NO"<<nline;
    return;
}
for(int k=2; k<1000; k++){
    ll sum=1;
    ll mul=k;
    sum+=mul;
    for(int i=0; i<32; i++){
        mul=mul*k;
        sum+=mul;
        if(sum==n){
            cout<<"YES"<<nline;
            return;

        }
        else if(sum>n){
            break;
        }
    }
}
cout<<"NO"<<nline;
    
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