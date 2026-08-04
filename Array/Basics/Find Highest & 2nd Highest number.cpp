#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4,5,88,88,24,25};

    int l1 = INT_MIN, l2 = INT_MIN;

    for(int i=0; i< a.size(); i++){

        if(a[i]> l1){
            l2 = l1;
            l1 = a[i];
        }
        else if(a[i]>l2 && a[i] !=l1){
            l2 = a[i];
        }
    }

    cout<< l1 <<" " <<l2<<endl;

}   
