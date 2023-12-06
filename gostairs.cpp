#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;  cin >> n;
    int a[n + 1];
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for(int i = 3 ; i <= n ; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
}

int32_t main(){
    freopen("gostairs.inp","r",stdin);
    freopen("gostairs.out","w",stdout);
    solve();
}

