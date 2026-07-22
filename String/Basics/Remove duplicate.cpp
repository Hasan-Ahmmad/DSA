// -------------using unordered_set----------- O(log(n))

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Haasannn";

    unordered_set<char> st;
    string ans = "";

    for(int i=0; i<s.length(); i++){
        if(st.find(s[i]) == st.end()){
            st.insert(s[i]);
            ans += s[i];
        }
    }

    cout<< ans <<endl;

}


// ---------------brute force------------O(n*n)

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Haasannn";

    string ans = "";

    for(int i=0; i<s.length(); i++){

        bool flag = false;
        for(int j=0; j<ans.length(); j++){
            if(s[i] == ans[j]){
                flag = true;
                break;
            }
        }

        if(!flag){
            ans += s[i];
        }
    }

    cout<< ans <<endl;

}   
