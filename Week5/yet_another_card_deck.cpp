#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    if(!(cin>>n>>q)) return 0;
    vector<int> pos(51,0);
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(pos[a]==0){
            pos[a]=i;
        }
    }
    for(int j=0;j<q;j++){
        int t;
        cin>>t;
        int current_pos=pos[t];
        cout<<current_pos<<(j== q-1 ?"":" ");
        for(int c=1;c<=50;c++){
            if(pos[c]>0 && pos[c]<current_pos){
                pos[c]++;
            }
        }
        pos[t]=1;
    }
    cout<<"\n";
    return 0;
}
