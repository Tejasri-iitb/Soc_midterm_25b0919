#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    // int sum=3;
    
    for(int i=0;i<n;i++){
        if(arr[l]==i+1){
            l++;
        }
        else if(arr[r]==i+1){
            r--;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;


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
