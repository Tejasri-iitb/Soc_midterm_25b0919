#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    if(!(cin>>n>>m))return 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<string(m,'#')<<"\n";
        }else{
            if((i/2)%2!=0){
                cout<<string(m-1,'.')<<"#\n";
            }else{
                cout<<"#"<<string(m-1,'.')<<"\n";
            }
        }
    }
}
