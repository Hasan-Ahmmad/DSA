//-------------using count()---------------O(n*n)
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(count(str.begin(), str.end(), str[i]) == 1){
            cout<<str[i]<<endl;
            break;
        }
    }

}
