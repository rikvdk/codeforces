#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, a;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> a;
        cout << (360 % (180 - a) == 0 ? "YES\n" : "NO\n");
    }
}
