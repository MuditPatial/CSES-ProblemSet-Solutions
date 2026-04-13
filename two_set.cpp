#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;

    if(sum % 2){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = sum / 2;

    vector<int> a1, a2;

    for(int i = n; i >= 1; i--){
        if(i <= target){
            a1.push_back(i);
            target -= i;
        } else {
            a2.push_back(i);
        }
    }

    cout << a1.size() << "\n";
    for(int x : a1) cout << x << " ";
    cout << "\n";

    cout << a2.size() << "\n";
    for(int x : a2) cout << x << " ";
    cout << "\n";

    return 0;
}