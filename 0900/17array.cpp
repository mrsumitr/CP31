#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<map>

void solve(){
  
int n;
cin>>n;
vector<int> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
map<int,int> mp;
for(auto x : v){
    mp[x]++;
}
if(mp.size()==1){
    cout<<"0"<<endl;
    return;
}
int storeMax=INT_MIN;
for(auto it: mp){
    int data=it.second;
    storeMax=max(data,storeMax);
}
int numSwap=n-storeMax;
int anss=numSwap;
anss=anss-storeMax;
int count=1;
int opn=storeMax*2;

while(anss>0){
    count++;
    anss=anss-opn;
    opn=opn*2;
    
}


cout<<numSwap+count<<endl;


}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}