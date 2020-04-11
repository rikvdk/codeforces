#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, a, b, c, d, k;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c >> d >> k;
        a = (a/c)+((a%c)!=0);
        b = (b/d)+((b%d)!=0);
        if(a + b > k) cout << "-1\n";
        else cout << a << ' ' << b << '\n';
    }
}
