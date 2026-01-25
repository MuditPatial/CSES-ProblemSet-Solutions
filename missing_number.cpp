#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num=0;

    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        num^=(i+1);
        num^=x;
    }
    num^=n;
    cout<<num;
    return 0;
}