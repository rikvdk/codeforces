#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

struct pairhash {
public:
  template <typename T, typename U>
  std::size_t operator()(const std::pair<T, U> &x) const
  {
    return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
  }
};

using namespace std;

typedef long long ll;

int main()
{
    string s;
    unordered_set<pair<int, int>, pairhash> seen;
    int x=0, y=0;
    char l='-';
    cin >> s;

    for (auto & c : s) {
        seen.insert({x, y});

        x += c == 'R' ? 1 : c == 'L' ? -1 : 0;
        y += c == 'U' ? 1 : c == 'D' ? -1 : 0;

        if ((l == 'R' && c == 'L') ||
                (l == 'L' && c == 'R') ||
                (l == 'U' && c == 'D') ||
                (l == 'D' && c == 'U') ||
                (c != 'R' && seen.find({x-1, y}) != seen.end()) ||
                (c != 'L' && seen.find({x+1, y}) != seen.end()) ||
                (c != 'U' && seen.find({x, y-1}) != seen.end()) ||
                (c != 'D' && seen.find({x, y+1}) != seen.end())) {
            cout << "BUG\n";
            return 0;
        }

        l = c;
    }

    cout << "OK\n";
}
