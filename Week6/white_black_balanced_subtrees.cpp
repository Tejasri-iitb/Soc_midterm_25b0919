#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=2;i<=n;++i){
        cin>>a[i];
    }

    string s;
    cin>>s;
    vector<int> dp(n+1);
    for(int i=1;i<=n;++i){
        dp[i]=(s[i-1]=='W')?1:-1;
    }
    for(int i=n;i>=2;--i){
        dp[a[i]]+=dp[i];
    }

    int ans=0;
    for(int i=1;i<=n;++i){
        if(dp[i]==0){
            ans++;
        }
    }

    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
