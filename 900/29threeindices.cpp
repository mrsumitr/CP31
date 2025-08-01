#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int j=1; j<n-1; j++){ // j is middle element
        int left = -1, right = -1;
        for(int i=0; i<j; i++){
            if(v[i] < v[j]){
                left = i;
                break;
            }
        }
        for(int k=j+1; k<n; k++){
            if(v[k] < v[j]){
                right = k;
                break;
            }
        }
        if(left != -1 && right != -1){
            cout<<"YES"<<endl;
            cout<<left+1<<" "<<j+1<<" "<<right+1<<endl;
            return;
        }
    }
    //onw more soln o(n) sliding x
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
