#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 2) {
            cout << "YES\n";
            continue;
        }

        unordered_map<int, int> freqMap;

        // Count frequency
        for (int num : a) {
            freqMap[num]++;
        }

        int size = freqMap.size();

        if (size > 2) {
            cout << "NO\n";  // More than 2 distinct elements, impossible
            continue;
        } 
        
        if (size == 1) {
            cout << "YES\n";  // Only one distinct element, always possible
            continue;
        }

        // If there are exactly 2 distinct elements, extract their frequencies
        auto it = freqMap.begin();  
        int firstFreq = it->second;
        it++;
        int secondFreq = it->second;

        // Check if their frequency difference is at most 1
        if (abs(firstFreq - secondFreq) > 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }     
}

int main() {
    solve();
    return 0;
}
