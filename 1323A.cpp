#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a;
    n--;

    if (a % 2 == 0) {
        cout << "1 1\n";
    } else  if (n >= 1) {
        n--;
        cin >> b;
        if (b % 2 == 0) cout << "1\n2\n";
        else cout << "2\n1 2\n";
    } else {
        cout << "-1\n";
    }

    for (int i = 0; i < n; ++i) {
        cin >> a;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) solve();
}
