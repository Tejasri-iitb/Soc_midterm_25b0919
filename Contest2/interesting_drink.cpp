#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        int low=0;
        int high=n-1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<=t){
                ans=mid+1;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
