#include <bits/stdc++.h>

#define endl "\n"
#define rtn return
#define all(x) x.begin(),x.end()

using namespace std;
// type
using ll = long long;
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



ll sum_multiple(ll u1, ll n, ll d){
    ll res = (ll)(n * u1) + (ll)((ll)(n * (n - 1)) / 2 ) * d;
    rtn res;
}

void solve(){
    ll p, n, k; cin >> p >> n >> k;
    ll money = (ll)sum_multiple(k, n ,k);
    if(money <= p)
        cout << "YES";
    else
        cout << "NO\n" << (ll)money - p;
}

int main() {
    setIO("FORAGE");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

