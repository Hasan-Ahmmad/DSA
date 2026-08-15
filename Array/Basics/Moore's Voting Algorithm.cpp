#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int cnt = 0, ans = 0;

    for(int x : v){
        if(cnt == 0){
            ans = x;
        }
        if(x == ans){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    cout<< ans <<endl;

}   
