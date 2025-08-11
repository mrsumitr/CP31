#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int neg=0;
        int pos=0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==-1){
                neg++;
            }
            else{
                pos++;
            }
            sum=sum+v[i];
        }
        if(sum>=0 && (neg%2==0)){
            cout<<"0"<<endl;
        }
        else if(sum>=0 && (neg%2!=0)){
            cout<<"1"<<endl;
        }
        else if(sum<0 && (neg%2==0)){
            int count=0;
            while(sum<0){
                sum=sum+2;
                count++;
            }
            if(count%2==0){
                cout<<count<<endl;
            }
            else{
                cout<<count+1<<endl;
            }
        }
        else if(sum<0 && (neg%2!=0)){
            int count=0;
            while(sum<0){
                sum=sum+2;
                count++;
            }
            if(count%2==0){
                cout<<count+1<<endl;
            }
            else{
                cout<<count<<endl;
            }
        }

    }
}
int main(){
    solve();
}