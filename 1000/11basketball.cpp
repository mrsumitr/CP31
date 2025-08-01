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
  int n,d;
  cin>>n>>d;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  int win=0;
  int pos=n-1;
  int ele=n;
  while(ele && pos>=0){
    if(v[pos]>d){
        win+=1;
        ele-=1;
        pos-=1;
    }
    else{
        int cnt=d/v[pos]+1;
        if(ele>=cnt){
            win+=1;
            ele=ele-cnt;
            pos--;
        }
        else{
            break;
        }
    }
  }
 

cout<<win<<endl;


}






   
int main(){
    
    solve();
    
}