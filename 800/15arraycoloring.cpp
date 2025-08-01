#include<iostream>
using namespace std;
#include<vector>
void solve()
{
    int t;
    cin>>t;
    while(t--){
        int even=0; 
        int odd=0;
        int n;
         cin>>n;
         vector<int> v(n);
         for(int i=0; i<n; i++){
            cin>>v[i];
         }
        
         for(int i=0; i<n; i++){
            if(v[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
         }
         
         if(odd%2==1){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }
    }
}
int main(){
    solve();
}