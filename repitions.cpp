#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.size();
    int maxFreq=1;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(s[i] != s[i-1]){
            maxFreq=max(maxFreq,cnt);
            cnt=1;
        }
        else{
            cnt++;
        }
    }
    maxFreq=max(maxFreq,cnt);

    cout<<maxFreq;
    
    return 0;
}