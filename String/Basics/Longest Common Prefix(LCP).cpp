#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cin>>s1>>s2;

    string ans = "";

    for(int i=0; i<min(s1.length(), s2.length()); i++){
        if(s1[i] != s2[i]){
            break;
        } 
        else{
            ans += s1[i];
        }
    }

    cout<<ans<<endl;

}   
