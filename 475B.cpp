#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_set>

using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    string h, v;
    cin >> n >> m >> h >> v;

    unordered_set<char> s({h.front(), h.back(), v.front(), v.back()});
    if ((h.front() == '<' && h.back() == '>' && v.front() == 'v' && v.back() == '^') ||
        (h.front() == '>' && h.back() == '<' && v.front() == '^' && v.back() == 'v')) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
