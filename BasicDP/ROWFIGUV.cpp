#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define rtn return
#define all(x) x.begin(),x.end()

using namespace std;
// type
using ld = long double;
using db = double;
using str = string;

//Doc ghi file
void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }
void setIO(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    if (s.size()!=0){setIn(s+".inp");    setOut(s+".out");}
}

int n, a[1005], d1[1005], d2[1005];

void solve(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    d1[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        d1[i] = 1;
        for(int j = 1 ; j < i ; j ++){
            if(a[i] < a[j])
                d1[i] = max(d1[i], d1[j] + 1);
        }
    }

    d2[n] = 1;
    for(int i = n - 1 ; i > 0 ; i--){
        d2[i] = 1;
        for(int j = n ; j > i ; j--){
            if(a[i] > a[j])
                d2[i] = max(d2[i], d2[j] + 1);
        }
    }

    int res = 0;
    for(int i = 1 ; i <= n ; i ++)
        res = max(d1[i] + d2[i] - 1, res);
/*
    for(int i = 1 ; i <= n ; i ++){
        cout << d1[i] << " ";
    }
    cout << endl;
    for(int i = 1 ; i <= n ; i++){
        cout << d2[i] << " ";
    }
*/
    cout << res;

}

int32_t main() {
    setIO("");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

