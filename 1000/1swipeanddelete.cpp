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
int n=s.length();
int zeroCount=0;
int oneCount=0;
for(int i=0; i<n; i++){
    if(s[i]=='0'){
        zeroCount++;
    }
    else{
        oneCount++;
    }
    
}




for(int i=0;i<n; i++){
    if(s[i]=='0'){
        if(oneCount>0){
        oneCount--;
        }
        else{
            break;
        }
    }
    else{
       if(zeroCount>0){
        zeroCount--;
        }
        else{
            break;
        } 
    }
    
}
cout<<zeroCount+oneCount<<endl;
}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}