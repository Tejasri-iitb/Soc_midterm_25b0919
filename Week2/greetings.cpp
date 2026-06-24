#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Person {
    int start;
    int end;
};

bool compare(const Person& a, const Person& b) {
    return a.start < b.start;
}

long long mergeAndCount(vector<int>& target, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long long count = 0;

    while (i <= mid && j <= right) {
        if (target[i] <= target[j]) {
            temp[k++] = target[i++];
        } else {
            temp[k++] = target[j++];
            count += (mid - i + 1);
        }
    }

    while (i <= mid) temp[k++] = target[i++];
    while (j <= right) temp[k++] = target[j++];

    for (i = left; i <= right; i++) {
        target[i] = temp[i];
    }

    return count;
}

long long countInversions(vector<int>& target, vector<int>& temp, int left, int right) {
    long long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        count += countInversions(target, temp, left, mid);
        count += countInversions(target, temp, mid + 1, right);
        count += mergeAndCount(target, temp, left, mid, right);
    }
    return count;
}

void solve() {
    int n;
    cin >> n;

    vector<Person> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i].start >> p[i].end;
    }

    sort(p.begin(), p.end(), compare);

    vector<int> ends(n);
    for (int i = 0; i < n; i++) {
        ends[i] = p[i].end;
    }

    vector<int> temp(n);
    cout << countInversions(ends, temp, 0, n - 1) << "\n";
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
