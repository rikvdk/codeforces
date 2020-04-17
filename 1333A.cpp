#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, n, m;
    bool b;
    char s[3] = "WB";
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n >> m;
        b = false;
        if (n * m % 2) cout << "BW";
        else cout << "BB";
        for (int k = 2; k < m; ++k) cout << s[b=!b];
        cout << '\n';
        for (int j = 1; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cout << s[b=!b];
            }
            cout << '\n';
        }
    }
}
