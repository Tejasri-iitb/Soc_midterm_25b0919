#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int max_elements = 0;
    int L = 0;

    for (int R = 0; R < a.size(); R++) {
        while (a[R] - a[L] >= n) {
            L++;
        }
        max_elements = max(max_elements,R - L + 1);
    }
    cout<<max_elements << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
