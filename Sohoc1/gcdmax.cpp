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

void solve(){
    int n;  cin >> n;
    if(n <= 2){
        cout << 1<< endl;
        rtn;
    }
    while(n % 2 != 0)
        n--;
    cout << n / 2 << endl;
}

int main() {
    setIO("");
    int t;    cin >> t;
    while(t--)
        solve();
    rtn 0;
}

