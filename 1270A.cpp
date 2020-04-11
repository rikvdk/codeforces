#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   int t, n, k1, k2, x, a, b;
   cin >> t;
   for (int i = 0; i < t; ++i) {
       cin >> n >> k1 >> k2;
       a=b=0;
       for (int i = 0; i < k1; ++i) cin >> x, a=max(a,x);
       for (int i = 0; i < k2; ++i) cin >> x, b=max(b,x);
       cout << ((a>b) ? "YES\n":"NO\n");
   }
}
