#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> s;
        auto pos = s.find('8');
        if (pos == string::npos) cout << "NO\n";
        else cout << (n - pos >= 11 ?"YES\n":"NO\n");
    }
}
