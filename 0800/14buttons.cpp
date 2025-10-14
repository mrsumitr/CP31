#include<iostream>
using namespace std;

void solve(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
         if (c % 2 == 1) // odd
        {
            if (b > a) // 1
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
        else // even
        {
            if (a > b) // 1
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
    }

int main(){
    solve();
}