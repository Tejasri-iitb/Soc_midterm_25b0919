#include<iostream>
using namespace std;

bool dist_digits(int num) {
    int d1=num%10;
    int d2=(num/10) % 10;
    int d3=(num/100) % 10;
    int d4=(num/1000) % 10;

    return (d1!= d2 && d1!= d3 && d1!= d4 &&
            d2!= d3 && d2!= d4 &&
            d3!= d4);
}


int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        if(dist_digits(n)){
            cout<<n;
            break;
        }
    }
}
