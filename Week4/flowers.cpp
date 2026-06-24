#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;
    if (!(cin >> t >> k)) return 0;

    vector<pair<int, int>> queries(t);
    int max_b = 0;

    for (int i = 0; i < t; ++i) {
        cin >> queries[i].first >> queries[i].second;
        max_b = max(max_b, queries[i].second);
    }

    vector<long long> dp(max_b + 1, 0);
    vector<long long> pref(max_b + 1, 0);

    dp[0] = 1;
    for (int i = 1; i <= max_b; ++i) {
        dp[i] = dp[i - 1];
        if (i>= k) {
            dp[i] = (dp[i] + dp[i - k]) % MOD;
        }
    }

    for (int i= 1; i <= max_b; ++i) {
        pref[i] = (pref[i - 1] + dp[i]) % MOD;
    }

    for (int i = 0; i < t; ++i) {
        int a = queries[i].first;
        int b = queries[i].second;
        long long ans = (pref[b] - pref[a - 1] + MOD) % MOD;
        cout << ans << "\n";
    }

    return 0;
}
