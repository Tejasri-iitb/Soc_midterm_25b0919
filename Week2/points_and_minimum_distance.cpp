#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[2*n];
        for(int j=0;j<2*n;j++){
            cin>>a[j];
        }
        std::sort(a,a+2*n);
        int x[n];
        for(int p=0;p<n;p++){
            x[p]=a[p];
        }//std::copy(a,a+n,x);
        int y[n];
        for(int p=0;p<n;p++){
            y[p]=a[p+n];
        }//std::copy(a+n;a+2n,y);
        int min_dis=(x[n-1] - x[0]) + (y[n-1] - y[0]);
        cout<<min_dis<<"\n";
        for(int p=0;p<n;p++){
            cout<<a[n+p]<<" "<<a[p]<<"\n";
        }
    }
}
