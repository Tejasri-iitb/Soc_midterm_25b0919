#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=k+(k-1)/(n-1);
        cout<<ans<<"\n";
    }
}
