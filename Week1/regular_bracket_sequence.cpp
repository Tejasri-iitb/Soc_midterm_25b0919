#include<iostream>
#include<string>
using namespace std;

int main(){
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;
    if(c1!=c4){
        cout<<0;
    }
    else{
        if(c3>0 && c1==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
}
