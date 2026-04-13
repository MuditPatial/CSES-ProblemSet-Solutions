#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(a>b) swap(a,b);

        int val = 3*(a/3);
        a-=val;
        b-= val;

        int v = b/2;
        b-= 2*v;
        a-= v;

        int v2 = a/2;

        b-=v2;
        a-=2*v2;

        if(a==0 && b==0){
            cout<<"YES \n";
        }
        else{
            cout<<"NO \n";
        }
        
        
    }
    return 0;
}