// -----------using frequency (o(n))-------------
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1 = "heart", str2 = "earth";

    int freq[26] = {0};

    for(int i=0; i<str1.length(); i++){

        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;   
    }

    for(int i : freq){
        if(i != 0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}



// ---------------using sort (O(nlogn))----------------

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1 = "heart", str2 = "earth";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    (str1 == str2)? cout<<"YES"<<endl : cout<<"NO"<<endl;

}   
