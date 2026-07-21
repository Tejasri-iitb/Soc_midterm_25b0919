//select a point that doesn't restrict to stay in between two
//requirement is n-1 edges
//since it is a tree , we can construct edges from that chosen vertex to all other vertices
#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<bool> is_middle(n+1,false);
    for(int i=0;i<m;++i){
        int a,b,c;
        cin>>a>>b>>c;
        is_middle[b]=true;
    }
    int center=-1;
    for(int i=1;i<=n;++i){
        if(!is_middle[i]){
            center=i;
            break;
        }
    }
    for(int i=1;i<=n;++i){
        if(i!=center){
            cout<<center<<" "<<i<<"\n";
        }
    }
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
