#include<iostream>
using namespace std;
#include<vector>
void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        if(k>2){
            if(x==1){
                if(n==3){
                    cout<<"YES"<<endl;
                    cout<<"1"<<endl;
                    cout<<"3"<<endl;
                }
                else if(n%2==0){
                    cout<<"YES"<<endl;
                    int count=0;
                    while(n!=0){
                      count++;
                      n=n-2;     
                    }
                    cout<<count<<endl;
                    for(int i=0; i<count; i++){
                        cout<<"2"<<" ";
                    }
                    
                }
                else{
                    cout<<"YES"<<endl;
                    int count=0;
                    n=n-3;
                    while(n!=0){
                      count++;
                      n=n-2;     
                    }
                    cout<<count+1<<endl;
                    for(int i=0; i<count; i++){
                        cout<<"2"<<" ";
                    }
                    cout<<"3"<<endl;
                }

            }
            else{
                cout<<"YES"<<endl;
                int count=0;
                while(n!=0){
                    count++;
                    n=n-1;
                }
                cout<<count<<endl;
                for(int i=0; i<count; i++){
                    cout<<"1"<<" ";
                }
                cout<<endl;
                
            }
        }
        else if(k==2){
            if(x==1){
                if(n%2==1){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                   int count=0;
                while(n!=0){
                    count++;
                    n=n-2;
                }
                cout<<count<<endl;
                for(int i=0; i<count; i++){
                    cout<<"2"<<" ";
                }
                cout<<endl; 
                }
            }
            else{
                cout<<"YES"<<endl;
                int count=0;
                while(n!=0){
                    count++;
                    n=n-1;
                }
                cout<<count<<endl;
                for(int i=0; i<count; i++){
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
        }
        else if(k==1){
            cout<<"NO"<<endl;
        }


    
           
    }
}

int main(){
    solve();
}