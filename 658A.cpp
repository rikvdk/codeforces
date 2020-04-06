#include <algorithm>
#include <iostream>
#include <vector>

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define REP(i,a,b) for(int i = a; i <= b; ++i)
#define repr(i,a,b) for(int i = a; i > b; --i)
#define REPR(i,a,b) for(int i = a; i >= b; --i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
    ll n, c;
    cin >> n >> c;
    vi p(n);
    vi t(n);

    rep(i,0,n) cin >> p[i];
    rep(i,0,n) cin >> t[i];

    ll a=0, L=0, R=0;
    rep(i,0, n) {
        a += t[i];
        L += max(0ll, p[i]-c*a);
    }
    a=0;
    REPR(i,n-1,0) {
        a += t[i];
        R += max(0ll, p[i]-c*a);
    }

    if(L > R) cout << "Limak";
    else if (R > L) cout << "Radewoosh";
    else cout << "Tie";
}
