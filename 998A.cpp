#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, a, b, s=0;
    cin >> n;
    if (n == 1) {
        cout << -1;
        return 0;
    }

    cin >> a;
    for (int i = 1; i < n; ++i) {
        cin >> b;
        s += b;
    }

    if (s == a)
        if (n == 2) cout << -1;
        else cout << "2\n1 2\n";
    else cout << "1\n1\n";

}
