#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<bitset>

void solve(){
  
ll n;
cin>>n;
if(n==2){
    cout<<"NO"<<endl;
    return;
}
if(n%2!=0){
    cout<<"YES"<<endl;
    return;
}
bitset<64>data(n);
if(data.count()==1){
    cout<<"NO"<<endl;
    return;

}
cout<<"YES"<<endl;
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}