#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    int ans = 0;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i]== ' '){
            break;
        }
        else ans++;
    }

    cout<< ans <<endl;

}   
