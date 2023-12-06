#include<bits/stdc++.h>

using namespace std;

string a[101][101];

string csl(string a, string b){
    int     du  = 0;
    int     mid = 0;
    string  res = "";
    a.insert(0, max(0, (int) (b.length() - a.length())), '0');
    b.insert(0, max(0, (int) (a.length() - b.length())), '0');
    for (int i = a.length()-1; i >= 0; --i)
    {
        mid = ((int) a[i] - 48) + ((int) b[i] - 48) + du;
        du  = mid / 10;
        res = (char) (mid % 10 + 48) + res;
    }
    if (du > 0) res = "1" + res;
    return res;
}


void solve(){
    memset(a, sizeof(a), 0);
    a[1][1] = '1';

    int n, m;
    cin >> n >> m;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(i == 1 && j == 1)
                a[i][j] = '1';
            else
                a[i][j] = csl(a[i-1][j], a[i][j-1]);
        }
    }

    cout << a[n][m];

    return;
}

int32_t main(){
    //freopen("roadsqua.inp","r",stdin);
    //freopen("roadsqua.out","w",stdout);
    solve();
}

