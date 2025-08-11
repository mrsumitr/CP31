#include<iostream>
using namespace std;

void solve(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long num=a+b+c;
        if(num%2==1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}
int main(){
    solve();
}