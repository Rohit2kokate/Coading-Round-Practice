#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int m;
    int st,sn;
    for(int itr=0;itr<s.length();itr++){
        if(s[itr]==0 || s[itr]==1){
            sn=stoi(s[itr]);
            st=stoi(s[itr+2]);
        }
        if(s[itr]=='A'){
            m=sn&st;
        }
        else if(s[itr]=='B'){
            m=sn|st;
        }
        else if(s[itr]=='C'){
            m=sn^st;
        }
    }
    cout<<m;
}