#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
using namespace std;

ll solve(vector<ll> &v, ll n, vector<ll> &dp) {
    if (n == 0) {
        return v[0];
    }
    if (n == 1) {
        return v[1];
    }
    if (dp[n] != -1) {
        return dp[n];
    }

    dp[n] = min(solve(v, n - 1, dp), solve(v, n - 2, dp)) + v[n];
    return dp[n];
}

ll mincoststairs(vector<ll> &v) {
    ll n = v.size();
    vector<ll> dp(n, -1);
    return min(solve(v, n - 1, dp), solve(v, n - 2, dp));
}

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    ll ans = mincoststairs(v);
    p(ans)
    return 0;
}
