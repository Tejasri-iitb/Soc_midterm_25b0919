#include<iostream>
#include<string>
#include<vector>
using namespace std;

int find_boundary(string s) {
    s += "**"; 
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '*' && s[i+1] == '*') {
            return i;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    string path;
    cin >> path;
    int boundary=find_boundary(path);
    int coins=0;
    for (int i = 0; i < boundary; i++) {
        if (path[i] == '@') {
            coins++;
        }
    }
    cout << coins << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
