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
        string s;
        int freqa=0;
        int freqb=0;
        if(n<3){
            cout<<"0"<<endl;
        }
        else{
        for(int i=0; i<n; i++){
            char ch;
            cin>>ch;
            if(ch=='-'){
                freqa++;
            }
            else{
                freqb++;
            }
            s += ch;
        }
        int apair=freqa/2;
        
            if(freqa%2!=0){

            
            int ndpair=freqa-apair;
            cout<<apair*ndpair*freqb<<endl;
            }
            else{
                cout<<apair*apair*freqb<<endl;
            }
        

    }
    }
}

int main(){
    solve();
}