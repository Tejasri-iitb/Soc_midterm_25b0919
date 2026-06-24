#include<iostream>
#include<string>
using namespace std;

bool compare(char s1,char s2){
       if((s1==s2)||(s1==s2+'a'-'A')||(s2==s1+'a'-'A')) return true;
       else return false;
    }

bool Up(char c){
    if(c>='A' && c<='Z') return true;
    return false;
}

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int i=0;
    for(i=0;i<int(str1.length());i++){
        if(compare(str1[i],str2[i])){
            continue;
        }
        else if((Up(str1[i])==Up(str2[i])) && (str1[i]>str2[i])){
            cout<<1;
            break;
        }
        else if((Up(str1[i])==Up(str2[i])) && (str1[i]<str2[i])){
            cout<<-1;
            break;
        }
        else if(Up(str1[i]) && (str1[i]+'a'-'A'>str2[i])){ cout<<1;
            break;
        }
        else if(Up(str2[i]) && (str1[i]>str2[i]+'a'-'A')){ cout<<1;
            break;
        }
        else{ cout<<-1;
            break;
        }
    }
    if(i==str1.length()){
        cout<<0;
    }
}
