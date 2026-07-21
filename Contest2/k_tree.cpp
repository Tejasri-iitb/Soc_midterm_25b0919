#include<iostream>
#include<vector>
using namespace std;
const int MOD= 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, d;
    if (!(cin >> n >> k >> d)) return 0;

    vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= k; ++w) {
            if (i - w >= 0) {
                if (w < d) {
                    dp[i][0] = (dp[i][0] + dp[i - w][0]) % MOD;
                    dp[i][1] = (dp[i][1] + dp[i - w][1]) % MOD;
                } else {
                    dp[i][1] = (dp[i][1] + dp[i - w][0]) % MOD;
                    dp[i][1] = (dp[i][1] + dp[i - w][1]) % MOD;
                }
            }
        }
    }

    cout<<dp[n][1]<<"\n";
    return 0;
}
