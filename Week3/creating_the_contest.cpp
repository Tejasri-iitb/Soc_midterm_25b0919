#include<iostream>
using namespace std;
//nicee question in greedy
//the logic is very puree
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=1;
    int max_count=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<=2*a[i]){
            count++;
        }
        else{
            max_count=max(count,max_count);
            count=1;
        }
    }
    max_count=max(count,max_count);
    //this line is important to check for the last element
    //if it does not follow else 
    cout<<max_count<<"\n";
}
