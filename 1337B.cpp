#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, x, n, m;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> x >> n >> m;
        while(x > 20 && n--) x = x / 2 + 10;
        if (x / 10 + (x%10 != 0) <= m) cout << "YES\n";
        else cout << "NO\n";
    }
}
