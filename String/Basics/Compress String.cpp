#include<bits/stdc++.h>
using namespace std;

int main(){

    string str; // str = "aaabbcccc" -> ans = a3b2c4
    cin>>str;

    string ans = "";
    int count = 1;

    for(int i=0; i<str.length(); i++){
        if(str[i] == str[i+1]){
            count++;
        }
        else{
            ans += str[i];
            ans += to_string(count);
            count =1;
        }
    }

    cout<<ans<<endl;

}   
