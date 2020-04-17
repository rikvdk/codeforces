#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    char s[27] = "abcdefghijklmnopqrstuvwxyz";
    int t, n, a, b;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cin >> n >> a >> b;
        for (int j = 0; j < n; ++j) cout << s[j%b];
        cout << '\n';
    }
}
