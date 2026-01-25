#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
#include<map>
#define ll long long
#define nline '\n'
int MOD=1e9+7;
void mrsumit() {
    ll n,m;
    cin>>n>>m;
    ll copy_n=n;
    ll copy_m=m;
    ll cnt_2_n=0;
    ll cnt_5_n=0;
    while(copy_n%10==0){
        copy_n/=10;
    }
    while(copy_n%2==0){
        cnt_2_n++;
        copy_n/=2;
    }
     while(copy_n%5==0){
        cnt_5_n++;
        copy_n/=5;
    }
    ll fi=1;
    while(cnt_5_n>0){
        if(fi*2<=m){
            fi*=2;
        }
        else{
            break;
        }
        cnt_5_n--;
    }
    while(cnt_2_n>0){
        if(fi*5<=m){
            fi*=5;
        }
        else{
            break;
        }
        cnt_2_n--;
    }
    while(fi*10<=m){
        fi*=10;
    }
    for(int i=9; i>=2; i--){
        if(fi*i<=m){
            fi*=i;
        }
    }
    cout<<n*fi<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        mrsumit();
    }
    return 0;
}