#include<iostream>
#include<vector>

using namespace std;
const int MAX= 100005;

int n,m;
int cats[MAX];
vector<int> adj[MAX];

int ans=0;
void dfs(int u,int p,int cnt){
    if(cats[u]){
        cnt++;
    }
    else{
        cnt=0;
    }
    if(cnt>m){
        return;
    }
    bool leaf=true;
    for(int v:adj[u]){
        if(v!=p){
            leaf=false;
            dfs(v,u,cnt);
        }
    }
    if(leaf && u!=1){
        ans++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if(!(cin>>n>>m)){
        return 0;
    }
    
    for(int i=1;i<=n;i++){
        cin>>cats[i];
    }
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);
    cout<<ans;
    return 0;
}
