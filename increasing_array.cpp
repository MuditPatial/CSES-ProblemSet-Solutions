#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    long long ans=0;
    int prev=vec[0];

    for(int i=1;i<n;i++){
        if(vec[i]<prev){
            ans+= 1LL*prev-vec[i];
        }
        else{
            prev=vec[i];
        }
    }

    cout<<ans;
    
    return 0;
}