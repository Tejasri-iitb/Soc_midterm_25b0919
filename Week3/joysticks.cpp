#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2;
    cin >> a1 >> a2;

    int minutes = 0;

    while(a1 > 0 && a2 > 0) {
        if (a1 == 1 && a2 == 1) {
            break;
        }
        if (a1<a2) {
            a1 += 1;
            a2 -= 2;
        }
        else{
            a1 -= 2;
            a2 += 1;
        }
        minutes++;
    }

    cout<<minutes<<"\n";
    return 0;
}
