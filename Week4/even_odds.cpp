#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;

    long long total_odds = (n + 1)/ 2;

    if (k <= total_odds) {
        cout << 2 * k - 1 <<"\n";
    } else {
        long long even_index =k- total_odds;
        cout <<2 * even_index<<"\n";
    }

    return 0;
}
