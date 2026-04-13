#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,k;
    cin>>n>>k;

    vector<int>a(n),freq;
    map<int,int>mp;

    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    for(auto &[x, y] : mp){
        freq.push_back(y);
    }

    sort(freq.begin(), freq.end());

    int sz = freq.size();

    

    

    return 0;
}