#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<set>

void solve(){
ll n;
cin>>n;
vector<ll> v(n);
for(int i=0;i<n; i++){
    cin>>v[i];
}
ll ans=v[0];
for(int i=1; i<n; i++){
    ans=ans&v[i];    
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