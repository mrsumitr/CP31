#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int count=0;
        if(x.find(s) != string::npos){
            cout<<"0"<<endl;
            continue;
        }
        else{
            while(x.find(s) == string::npos){
                count++;
                x.append(x);
                
                    if(count>6){
                        cout<<"-1"<<endl;
                        break;
                    }
                

            }
            if(x.find(s) != string::npos){
            cout<<count<<endl;
            }
        }
    }
}
int main(){
    solve();
   
}