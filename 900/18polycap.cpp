#include<iostream>
using namespace std;
#include<algorithm>
#define ll long long
#include<vector>
#include<cmath>
#include<bitset>
#define nline '\n'
#include<climits>

void solve(){
          long long a, b, c;
        cin >> a >> b >> c;
 
        bool answer = false;
 
        long long new_a = 2 * b - c; // 1
        if (new_a / a > 0 && new_a % a == 0) // 1
            answer = true;
 
        long long new_b = (a + c) / 2;
        if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0)
            answer = true;
 
        long long new_c = 2 * b - a;
        if (new_c / c > 0 && new_c % c == 0)
            answer = true;
 
        if (answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


  

}






   
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
}