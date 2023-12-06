#include <bits/stdc++.h>

#define int long long
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

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int32_t main() {
    setIO("tn");
    int n;
    std::cin >> n;

    std::vector<int> intervals(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> intervals[i];
    }

    // Find the least common multiple of all intervals
    int days_to_sync = 1;
    for (int interval : intervals) {
        days_to_sync = lcm(days_to_sync, interval);
    }

    // Find the update counts for each student
    std::vector<int> update_counts;
    for (int interval : intervals) {
        update_counts.push_back(days_to_sync / interval);
    }

    // Output the result
    std::cout << days_to_sync << endl;
    for (int count : update_counts) {
        std::cout << count << " ";
    }
//SOME PART OF THIS CODE IS AI-GENERATED.
    return 0;
}
