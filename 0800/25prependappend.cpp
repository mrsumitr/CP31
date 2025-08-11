#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<vector>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=n;
        string s;
        cin>>s;
        int start=0;
        int end=n-1;
        while((s[start]=='0' && s[end]=='1' && start<end) ||(s[end]=='0' && s[start]=='1' && start<end)){
            ans=ans-2;
            start++;
            end--;
        }
        cout<<ans<<endl;
    }
}
int main(){
    solve();
}