#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    long long d;cin>>d;
    long long p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int wins=0;
    int fi=0;
    int last=n-1;
    std::sort(p,p+n);
    while(fi<=last){
        long long x=d/p[last]+1;
        if(last-fi+1>=x){
            wins++;
            last--;
            fi+=x-1;
        }else break;
    }
    cout<<wins<<"\n";
}
