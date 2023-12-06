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

bool isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}


void solve(){
    queue<int> q;
    int a, n;
    cin >> a >> n;
    for (int i = 2; i <= n, i < 10; i++){
        if (isPrime(i)){
            q.push(i);
        }
    }
    while (!q.empty()){
        for (int i = 1; i <= 9; i++){
            int k = q.front()*10 + i;
            if ( k <= n && isPrime(k)){
                q.push(k);
            }
        }
        if(q.front() >= a)
            cout << q.front() << endl;
        q.pop();
    }
}

int main() {
    setIO("sprime");
    //int t;    cin >> t;
    //while(t--)
        solve();
    rtn 0;
}

