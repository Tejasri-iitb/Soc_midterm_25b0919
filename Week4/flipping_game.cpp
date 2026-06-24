#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int total_ones = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            total_ones++;
        }
    }

    int max_ones_after_flip = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j <= n - 1; j++) {
            int current_ones = total_ones;
            
            for(int k = i; k <= j; k++) {
                if (a[k] == 0) {
                    current_ones++;
                } else {
                    current_ones--;
                }
            }
            
            max_ones_after_flip= max(max_ones_after_flip, current_ones);
        }
    }

    cout<<max_ones_after_flip << "\n";
}
