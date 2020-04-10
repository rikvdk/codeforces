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
    int t, a, b, x, y;
    cin >> t;
    rep(i,0,t) {
        cin >> a >> b >> x >> y;
        //cout << max(max(max(x*y, (a-x)*y), x*(b-y)), (a-x)*(b-y)) << '\n';
        cout << max(max(max(b*x, b*(a-x-1)), a*y), a*(b-y-1)) << '\n';
    }
}

