#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>

void solve(){
  ll n,m,i,j;
  cin>>n>>m>>i>>j;
  ll a,b,c,d;
  if(i==1 && j==1){
    a=1; b=1;
}
else{
    a=1; 
     b=1;
}
c=n;
d=m;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}





   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}