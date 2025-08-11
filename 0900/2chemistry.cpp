#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<unordered_map>
#define nline '\n'
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;


    int freq[26]={0};
    

    if(n-k==1){
        cout<<"YES"<<endl;
        return;
    }
    
    for(char c: s){
        freq[c-'a']++;
    }
    int even=0;
    int odd=0;
    for(int i=0; i<26; i++){
        
        if(freq[i]%2!=0){
            odd++;
        }
        
    }
    if(odd-k>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    
    }

   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}