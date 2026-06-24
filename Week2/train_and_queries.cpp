#include<iostream>
#include<map>
using namespace std;

int u[200005];
void solve(){
    int n,k;
    cin >>n >> k;
    map<int,int> first_occ;
    map<int,int> last_occ;
    
    for(int i = 0; i < n; i++) {
        cin >> u[i];
        
        if (first_occ.find(u[i]) == first_occ.end()) {
            first_occ[u[i]] = i;
        }
        last_occ[u[i]] = i;
    }
    
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >>a>>b; 
        if(first_occ.count(a) && last_occ.count(b) && first_occ[a] <= last_occ[b]) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
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
