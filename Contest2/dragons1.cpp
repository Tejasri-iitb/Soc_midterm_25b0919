#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(s>arr[i].first){
            s+=arr[i].second;
        }
        else{
            cout<<"NO";
            break;
        }
        if(i==n-1){
            cout<<"YES";
        }

    }
    
}
