#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n, m, g = 0, a, b;
    unordered_map<int, unordered_set<int>> laces;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;

        laces[a].insert(b);
        laces[b].insert(a);
    }

    while(laces.size()) {
        vector<int> removals;
        for (auto & it : laces) {
            if (it.second.size() == 1) {
                removals.push_back(it.first);
            }
        }

        if (removals.size() == 0) {
            break;
        }

        for (auto & i : removals) {
            for (auto & it : laces[i]) {
                laces[it].erase(i);
            }

            laces.erase(i);
        }

        g++;
    }

    cout << g << '\n';
}
