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
  string s;
  cin>>s;
  int countZero=0;
  int countOne=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='0'){
        countZero++;
    }
    else{
        countOne++;
    }
  }
    int couple=min(countZero,countOne);
    if(couple%2!=0){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }

    
  }
  








   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}