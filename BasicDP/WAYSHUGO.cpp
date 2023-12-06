#include<bits/stdc++.h>

#define int long long

using namespace std;

bool a[10000][10000];
int d[10000];

void solve(){
    int n;  cin >> n;
    int u, v;

    while(cin >> u >> v)
        a[u][v] = 1;

    d[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        for(int j = 1 ; j < i ; j++)
            if(a[j][i])
                d[i] += d[j];
    }

    cout << d[n];

}

int32_t main(){
    //freopen("wayshugo.inp","r",stdin);
    //freopen("wayshugo.out","w",stdout);
    solve();
}

