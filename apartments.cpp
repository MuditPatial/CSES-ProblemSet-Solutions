#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n>>m>>k;

    vector<int>a(n),b(m);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i1=0,i2=0;
    int ans =0;

    while(i1<n && i2<m){
        int lb = a[i1]-k;
        int ub = a[i1]+k;

        if(b[i2]>=lb && b[i2]<=ub){
            ans++;
            i1++;
            i2++;
        }
        else if(b[i2]<lb){
            i2++;
        }
        else{
            i1++;
        }
    }

    cout<<ans<<'\n';

    return 0;
}