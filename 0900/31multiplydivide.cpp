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
  
int n;
cin>>n;
 if(n==1){
    cout<<"0"<<endl;
    return;
 }
 int count=0;
 while(n!=2 && n!=1){
    if(n%6==0){
        n=n/6;
        count++;
    }
    else{
    if(n%3 != 0){
        cout<<"-1"<<endl;
        return;
    }
    n=n*2;
    count++;
    
    }
    
 }
 if(n==1){
    cout<<count<<endl;

 }
 else{
    cout<<"-1"<<endl;
 }
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}