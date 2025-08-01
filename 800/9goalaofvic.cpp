#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>v(n-1);
        for(int i=0; i<n-1; i++){
            cin>>v[i];
            sum=sum+v[i];
        }
        cout<<-sum<<endl;
    }

}