#include<bits/stdc++.h>

#define int long long

using namespace std;

int a[7005];
int d[7005];

void solve(){
    int n;  cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    d[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        int maxdj = 0;
        for(int j = 1 ; j < i ; j++){
            if(a[j] <= a[i] && d[j] > maxdj)
                maxdj = d[j];
        }
        d[i] = maxdj + 1;
    }

    cout << *max_element(d + 1, d + n + 1);

}

int32_t main(){
    freopen("INCSUBSE.inp","r",stdin);
    freopen("INCSUBSE.out","w",stdout);
    solve();
}

