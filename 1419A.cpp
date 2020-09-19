#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    char c;
    int n, e=0, o=0;
    cin >> n;

    if (n == 1) {
        cin >> c;
        int d = c - '0';
        cout << (d%2 ? "1\n" : "2\n");
        return;
    }


    for (int i = 1; i <= n; ++i) {
        cin >> c;
        int d = c - '0';

        if (i % 2 && d % 2) {
            o = 1;
        } else if (i % 2 == 0 && d % 2 == 0) {
            e = 1;
        }
    }

    if (n % 2) {
        cout << (o ? "1\n" : "2\n");
    } else {
        cout << (e ? "2\n" : "1\n");
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
