#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#define nline '\n'

void solve(){

    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(num==1){
            num+=1;
        }
        v[i]=num;

    } 
    
    for(int i=1; i<n; i++){
        if(v[i]%v[i-1]==0){
            v[i]=v[i]+1;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<nline;

}
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}