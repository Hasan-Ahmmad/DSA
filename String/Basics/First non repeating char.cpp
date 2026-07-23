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



//------------using frequency & unordered map-------------------O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<int> freq(256,0); // or unordered_map<char, int> freq;

    for(char c : s){
        freq[c]++;
    }

    bool flag = false;
    char ans;
    for(char c : s){
        if(freq[c] == 1){
            ans = c;
            flag = true;
            break;            
        }
    }
    if(flag) cout<<ans<<endl;
    else cout<<"Not found";

}


