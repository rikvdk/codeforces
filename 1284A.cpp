#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ll n, m, q, y;
    cin >> n >> m;
    vector<string> ns(n);
    vector<string> ms(m);

    for (int i=0; i<n; ++i) cin >> ns[i];
    for (int i=0; i<m; ++i) cin >> ms[i];

    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> y;
        y--;
        cout << ns[y%n] << ms[y%m] << endl;
    }
}
