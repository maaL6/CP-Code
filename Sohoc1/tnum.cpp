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

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

bool scp(int a)
{
    int t = sqrt(a);
    return (t * t == a);
}

void solve(){
    int n;  cin >> n;
    int a;
    for(int i = 1 ; i <= n ; i++){
        cin >> a;
        cout << ((scp(a) && isPrime(sqrt(a)))? "YES\n" : "NO\n");

    }
}

int32_t main() {
    setIO("");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

