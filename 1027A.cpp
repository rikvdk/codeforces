#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    for (int j = 0; j < n/2; ++j) {
        int x = abs(s[j] - s[n-j-1]);
        if (x != 0 && x != 2)  {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
