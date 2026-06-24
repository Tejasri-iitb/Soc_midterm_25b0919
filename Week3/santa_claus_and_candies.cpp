#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> candies;
    int current = 1;

    while(n>=current) {
        candies.push_back(current);
        n-=current;
        current++;
    }

    if(n>0){
        candies.back()+=n;
    }

    cout << candies.size() << "\n";
    for (size_t i = 0; i < candies.size(); i++) {
        cout<<candies[i];
        if(i<candies.size()-1){
            cout<< " ";
        }
    }
    cout << "\n";
    return 0;
}
