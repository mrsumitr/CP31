#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#define nline '\n'
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxLeft = 0, maxRight = 0, countLeft = 0, countRight = 0;
    for(char c: s){
        if(c == '<'){
            countLeft++;
            maxRight=max(maxRight,countRight);
            countRight=0;
            
        }
        else{
            countRight++;
            maxLeft=max(maxLeft,countLeft);
            countLeft=0;
        }
    }
    maxRight=max(maxRight,countRight);
    maxLeft=max(maxLeft,countLeft);
    cout<<max(maxRight,maxLeft)+1<<nline;
    
}
   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}