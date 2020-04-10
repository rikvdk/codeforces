#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, n, a, s, z;
    cin >> t;
    while(t--) {
        cin >> n;
        z=s=0;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            s += a;
            z += a == 0;
        }
        if (z == -s) cout << z+1 << '\n';
        else if (z) cout << z << '\n';
        else if (s == 0) cout << "1\n";
        else cout << "0\n";
    }
}
