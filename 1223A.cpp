#include <algorithm>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll q, n;;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> n;
        if(n==2) cout << 2;
        else if(n%2 == 0) cout << 0;
        else cout << 1;
        cout << endl;
    }
}
