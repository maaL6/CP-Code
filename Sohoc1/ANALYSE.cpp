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

int primenum[169] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,
157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233,
239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419,
421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503,
509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607,
613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701,
709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811,
821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911,
919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};

int num[1000][170];

void generate_analyse(){
    memset(num, sizeof(num), 0);
    num[2][1] = 1;
    for(int i = 3 ; i <= 1000 ; i++){
        for(int j = 1 ; j <= 168 ; j++){
            num[i][j] = num[i - 1][j];
        }
        for(int j = 1 ; j <= 168 ; j++){
            int temp = i;
            if(temp % primenum[j] == 0 && primenum[j] <= i){
                while(temp % primenum[j] == 0){
                    num[i][j]++;
                    temp /= primenum[j];
                }
            }
            if (temp <= 1)
                break;
        }
    }
}

void solve(int n){
    for(int i = 1 ; i <= 169 ; i++){
        if(num[n][i] != 0)
            cout << num[n][i] << " ";
        else{
            cout << endl;
            rtn;
        }
    }
}

int main() {
    generate_analyse();
    setIO("analyse");
    int n;// cin >> n;
    while(cin >> n)
        solve(n);
    rtn 0;
}

