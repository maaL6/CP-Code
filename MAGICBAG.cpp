#include<bits/stdc++.h>

#define int long long

using namespace std;

int a[100001];
int d[100001];

void solve(){
    int n;  cin >> n;

    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    d[1] = a[1];
    d[2] = a[2];
    for(int i = 3 ; i <= n ; i++){
        d[i] = a[i];
        d[i] += max(d[i-2], d[i-3]);
    }

    //for(int i = 1 ; i <= n ; i++)
    //    cout << d[i] << " ";
    cout << max(d[n], d[n-1]);

}

int32_t main(){
    //freopen("MAGICBAG.inp","r",stdin);
    //freopen("MAGICBAG.out","w",stdout);
    solve();
}

