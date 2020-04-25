#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

typedef long long ll;

void solve() 
{
    ll n, m, p, a=0, b=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        a += p%2 == 0;
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> p;
        b += p%2 == 0;
    }
    cout << a * b + (n-a) * (m-b) << '\n';
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
