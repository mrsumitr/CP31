#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<string>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str=to_string(n);
        int size=str.length();
        if(n<10){
            cout<<n<<endl;
        }
        if(n>=10 && n<100){
            int digit=n/10;
            cout<<9+digit<<endl;
        }
        if(n>=100 && n<1000){
            int digit=n/100;
            cout<<18+digit<<endl;
        }
        if(n>=1000 && n<10000){
            int digit=n/1000;
            cout<<27+digit<<endl;
        }
        if(n>=10000 && n<100000){
            int digit=n/10000;
            cout<<36+digit<<endl;
        }
        if(n>=100000 && n<1000000){
            int digit=n/100000;
            cout<<45+digit<<endl;
        }

        
        
    
    }
}
int main(){
    solve();
}