#include <algorithm>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    char c;
    cin >> n;

    cin >> c;
    if(c == 'F') cout << "NO";
    else {
        while(--n) cin >> c;
        if(c == 'F') cout << "YES";
        else cout << "NO";
    }
}
