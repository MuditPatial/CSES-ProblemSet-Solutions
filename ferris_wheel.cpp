#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;

    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    
    int hi = n-1, lo = 0;
    int ans=0;

    while(lo<=hi){
        if(lo == hi){
            lo++;
            hi--;     
        }

        else if(a[lo] + a[hi] > x){
            hi--;
            
        }
        else{
            hi--;
            lo++;
        }
        ans++;
    }
    cout<<ans<<'\n';

    return 0;
}