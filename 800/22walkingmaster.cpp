#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long m,x,y,x1,y1,eqn;
        x1=a+1;
        y1=b+1;
        m=(y1-b)/(x1-a);
        eqn=d-b-m*(c-a);
        if(b>d){
            cout<<"-1"<<endl;
        }
        else{
        if(m>0 && eqn<0){
            cout<<"-1"<<endl;
        }
        else if(m<0 && eqn>0){
            cout<<"-1"<<endl;
        }
        else{
            long long step=abs(d-b);
            a=a+step;
            int nxtStep=abs(c-a);
            cout<<step+nxtStep<<endl;
        }
        }
        
    }
}
int main(){
    solve();
}