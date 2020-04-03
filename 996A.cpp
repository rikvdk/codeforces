#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    cout << n/100 + n%100/20 + n%20/10 + n%10/5 + n%5;
}
