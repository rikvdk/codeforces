#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int t, m, n;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n >> m;
        cout << (n%m?"NO\n":"YES\n");
    }
}
