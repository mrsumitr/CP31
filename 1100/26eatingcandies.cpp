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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    if(n==2){
        if(v[0]==v[1]){
            cout<<"2"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        return;
    }
    ll left=0;
    ll right=n-1;
    ll weight1=v[0];
    ll weight2=v[right];
    ll candies=0;
    while(left<right){
        if(weight1==weight2){
            candies=left+1+n-right;
        }
        if(weight1<=weight2){
            left++;
            weight1+=v[left];
        }
        else{
            right--;
            weight2+=v[right];  
        }
        
    }
    cout<<candies<<endl;

}


   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}