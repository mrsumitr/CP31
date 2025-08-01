#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;
        int start = 0;
        
        while (start + 1 < v.size()) {  // Ensure we have at least two elements to compare
        long long element=v[start]*v[start+1];
            if ((v[start] % 2 == 0 && v[start + 1] % 2 == 0) || 
                (v[start] % 2 != 0 && v[start + 1] % 2 != 0)) {
                
               v.erase(v.begin()+start);
             v.erase(v.begin()+start);
             v.insert(v.begin()+start,element);

                count++;  // Increment operation count
            } else {
                start++;  // Move to next pair
            }
        }
        
        cout << count << endl;
    }
}

int main() {
    solve();
    return 0;
}
