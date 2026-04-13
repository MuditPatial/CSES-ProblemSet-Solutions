#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    // cin>>t;

    while(t--){
        int n ;
        cin>>n;

        for(int i=1;i<=n;i++){
            long long v = 1LL*i*i;
            long long total = max(0LL,(v*(v-1))/2);
            int rem = max(0,2*2*(i-1)*(i-2));

            cout<< total - rem <<'\n';
        }
        

    }

    
    
    return 0;
}