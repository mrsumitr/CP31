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
  ll  n,x,sum=0;
  cin>>n>>x;
  vector<ll> v(n);
  for(int i=0; i<n; i++){
     cin>>v[i];
    sum+=v[i];
  }
  ll minBeauty=sum/x;
  if(sum%x!=0){
    minBeauty++;
  }
  ll beauty=0;
  for(int i=0; i<n; i++){
    beauty=beauty+v[i]/x;
    if(v[i]%x!=0){
    beauty++;
  }
  }
  cout<<minBeauty<<" "<<beauty<<endl;

}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}