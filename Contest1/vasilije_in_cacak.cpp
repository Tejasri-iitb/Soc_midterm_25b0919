#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >>n >>k;
    long long x;
    cin>>x;
    //sum can be found if it is in a particular range
    long long sum1= (long long)k*(k+1)/2;
    int p = n-k;
    long long sum2= (long long)n*(n+1)/2-(long long)p*(p+1)/2;
    if(x>=sum1 && x<=sum2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
