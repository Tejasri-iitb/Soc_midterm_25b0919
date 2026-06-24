#include<iostream>
#include<vector>
#include<map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, long long> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    long long total_pairs = 0;
    
    for (auto const& [num, count] : freq) {
        total_pairs += (count * (count - 1)) / 2;
    }
    
    if (freq.count(1) && freq.count(2)) {
        total_pairs += freq[1] * freq[2];
    }
    
    cout << total_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
