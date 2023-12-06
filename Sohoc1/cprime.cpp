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

bool prime(ll n){
    if (n < 2)
        return 0;
    else
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0)
                return 0;
        }
    return 1;
}

ll rev_num(ll a){
    ll n = 0;
    while(a != 0){
        n = n * 10 + (a % 10);
        a /= 10;
    }
    rtn n;
}


void solve(){
    int n;  cin >> n;
    if(prime(n) && prime(rev_num(n)))
        cout << 1;
    else
        cout << 0;
}

int main() {
    setIO("");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

