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
  
int n;
char c;
cin>>n>>c;
string s;
cin>>s;
int maxV=0;
int count=0;
vector<int> posc;
vector<int> posg;
if(c=='g'){
    cout<<"0"<<endl;
    return;
    }
for(int i=0; i<n; i++){
    if(s[i]==c){
        posc.push_back(i+1);
    }
    if(s[i]=='g'){
        posg.push_back(i+1);
    }

}
int pos=-1;
for(int i=posg.back(); i<n; i++){
    if(s[i]==c){
        pos=i+1;
        break;
    }
}
for(int i=0; i<posc.size(); i++){
    for(int j=0; j<posg.size(); j++){
        if(posc[i]<posg[j]){
            count=max(count,posg[j]-posc[i]);
            break;
        }
    }
}
if(pos>0){
    int val=n-pos+posg[0];
    cout<<max(val,count)<<endl;
}
else{
    cout<<count<<endl;
}


}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}