#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>
#include<unordered_map>
#include<map>
#include<set>

void solve(){
  
int n,k;
cin>>n>>k;
string s;
cin>>s;
int w=0;
int b=0;
for(int i=0; i<k; i++){
  if(s[i]=='W'){
    w++;
  }
  else{
    b++;
  }

}
int ans=abs(k-b);
int index=k-1;
int i=0;
while(index<n){
    ans=min(ans,abs(k-b));
    index++;
    if(s[i]=='W'){
        w--;
    }
    else{
        b--;
    }

    if(s[index]=='W'){
        w++;
    }
    else{
        b++;
    }
    i++;
    
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