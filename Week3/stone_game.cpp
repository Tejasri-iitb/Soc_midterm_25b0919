#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i;
        }
            sort(p.begin(),p.end());
            int x=p[0].second;
            int y=p[n-1].second;
            int left=min(x,y);
            int right =max(x,y);
            int min_steps=min({right+1,n-left,left+1+n-right});
            cout<<min_steps<<"\n";    
    }
}
