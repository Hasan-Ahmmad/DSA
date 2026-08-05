//---------------using map--------------

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4,5,88,2,88,24,5,5,2};

    map<int, int> mp;

    for(int i=0; i<a.size(); i++){
        mp[a[i]]++;
    }

    for(auto i : mp){
        cout<< i.first << " " << i.second <<endl;
    }

}   




//-----------------using sort+count-------------------

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4,5,88,2,88,24,5,5,2};
    sort(a.begin(), a.end());

    for(int i=0; i<a.size(); i++){

        int cnt = 1;
        while(i < a.size()-1 && a[i] == a[i+1]){
            cnt++;
            i++;
        }
        
        cout<< a[i] << " " << cnt <<endl;
    }

}   



// ----------------using frequency array-------------

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4,5,88,2,88,24,5,5,2};

    vector<int> freq(1000,0);

    for(int i=0; i<a.size(); i++){
        freq[a[i]]++;
    }

    for(int i=0; i<freq.size(); i++){
        if(freq[i]>0){
            cout<< i << " " << freq[i] <<endl;
        }
    }

}   
