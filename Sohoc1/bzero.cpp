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
void setOut(string s) { f#include <bits/stdc++.h>

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

ll factorial(ll n){
    ll res = 1;
    for(int i = 2 ; i<= n ; i++){
        res *= i;
    }
    rtn res;
}

void solve(){
    int n;  cin >> n;
    int ans=0;
       while(n/5){
           ans+=n/5;
           n/=5;
       }
       cout<< ans;

}

int main() {
    setIO("BZERO");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

reopen(s.c_str(),"w",stdout); }
void setIO(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    if (s.size()!=0){setIn(s+".inp");    setOut(s+".out");}
}

ll factorial(ll n){
    ll res = 1;
    for(int i = 2 ; i<= n ; i++){
        res *= i;
    }
    rtn res;
}

void solve(){
    int n;  cin >> n;
    cout << n/5;
}

int main() {
    setIO("");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

