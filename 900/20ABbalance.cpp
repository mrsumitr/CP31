#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<numeric>


void solve(){
  string s;
  cin>>s;
 
  int n=s.length();
  if(s[0]!=s[n-1]){
    if(s[n-1]=='a'){
        s[n-1]='b';
    }
    else{
        s[n-1]='a';
    }
  }
  cout<<s<<endl;



}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}