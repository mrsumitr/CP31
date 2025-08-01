#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<climits>
#define nline '\n'

void solve(){

int n;
cin>>n;
vector<int> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
if(n==1){
    cout<<"0"<<endl;
    return;
}
if(n==2){
    cout<<abs(v[1]-v[0])<<endl;
    return;
}
int ans1=INT_MIN;
//case 1 a1 is fixed
for(int i=1; i<n; i++){
if(v[i]-v[0]>ans1){
    ans1=v[i]-v[0];
}
}
//cas e 2 a5 is fixed
int ans2=INT_MIN;
for(int i=0; i<n-1; i++){
    if(v[n-1]-v[i]>ans2){
        ans2=v[n-1]-v[i];
    }
}
//case 3
int ans3=INT_MIN;
for(int i=0; i<n-1; i++){
if(v[i]-v[i+1]>ans3){
    ans3=v[i]-v[i+1];
}

}
cout<<max(ans1,max(ans2,ans3))<<nline;




}
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}