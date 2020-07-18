#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int n, cc=1, passwords[26];

int main()
{
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        int p = 0;
        for (auto & c : s) p |= 1 << (c - 'a');
        for (int j = 0; j < 26; ++j) {
            if(p & (1 << j)) {
                passwords[j] |= p;
            }
        }
    }

    for (int k = 0; k < 26; ++k) {
        for (int i = 0; i < 26; ++i) {
            int p = passwords[i];
            for (int j = 0; j < 26; ++j) {
                if(p & (1 << j)) {
                    passwords[j] |= p;
                }
            }
        }
    }

    sort(passwords, passwords+26);
    for (int i = 1; i < 26; ++i) {
        cc += passwords[i] != passwords[i-1];
    }

    cout << cc - (passwords[0] == 0) << '\n';
}
