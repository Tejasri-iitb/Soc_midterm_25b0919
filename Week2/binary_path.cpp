#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a1, a2;
    cin>> a1 >> a2;
    
    int start = 0;
    int end = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        if (a1[i + 1] < a2[i]) {
            start = i + 1;
            end = i + 1;
        } else if (a1[i + 1] == a2[i]) {
            end = i + 1;
        } else {
            break;
        }
    }
    
    string ans = a1.substr(0, end + 1) + a2.substr(end, n - end);
    int paths = end - start + 1;
    
    cout<< ans << "\n";
    cout<< paths << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
