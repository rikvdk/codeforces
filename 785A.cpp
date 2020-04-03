#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    int n;
    ll r = 0;
    string s;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        switch (s[0]) {
            case 'T':
                r += 4;
                break;
            case 'C':
                r += 6;
                break;
            case 'O':
                r += 8;
                break;
            case 'D':
                r += 12;
                break;
            case 'I':
                r += 20;
                break;
        }
    }
    cout << r;
}
