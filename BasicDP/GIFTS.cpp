#include<bits/stdc++.h>

#define int long long

using namespace std;

int a[1005];
int d[1005];

void solve(){
    int n;  cin >> n;

    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    d[1] = a[1];
    d[2] = a[1] + a[2];
    d[3] = max({a[3] + a[1], a[2] + a[3], d[2]});

    for(int i = 4 ; i <= n ; i++){
        d[i] = max({d[i-3] + a[i] + a[i-1], d[i-4] + a[i] + a[i-1], d[i-2] + a[i]});
    }

    //for(int i = 1 ; i <= n ; i++)
    //    cout << d[i] << " ";
    cout << d[n];

}

int32_t main(){
    //freopen("GIFTS.inp","r",stdin);
    //freopen("GIFTS.out","w",stdout);
    solve();
}
