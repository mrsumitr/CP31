#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void solve(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int sum=0;
    bool found=false;
    for(int i=0; i<s.length(); i++){
        
        if(s[i]=='.'){
            count++;
            sum++;
            if(count==3){
                cout<<"2"<<endl;
                found=true;
                break;
            }
        }
        else{
            count=0;
        }
        
        

    }
    if(!found){
    cout<<sum<<endl;
    }
    
}
}
int main()
{
    
    solve();
}