#include <iostream>
#include <vector>
#include <unistd.h>
#include <unistd.h>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>
#include <sstream>
#include <set>
#include <unordered_set>
#include <cstring>
#include <string.h>
#include <queue>

using namespace std;
#define mid(s, e) (s + (e - s) / 2)
#define ALL(x) (x).begin(), (x).end()
#define endl '\n'
#define MAXE(vec) *max_element(ALL(vec))
#define MINE(vec) *min_element(ALL(vec))
#define valid(a, b, c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
#define ll int
void solve()
{
    ll x, n, nb;
    cin >> x >> n;
    multimap<int, pair<ll, ll>> mp;
    mp.insert({x, {0, x}});
    set<ll> traffic_lights;
    traffic_lights.insert(0);
    traffic_lights.insert(x);
    for (int i = 0; i < n; i++)
    {
        cin >> nb;
        auto it = traffic_lights.upper_bound(nb);
        ll right = *it;
        it--;
        ll left = *it;
        traffic_lights.insert(nb);
        mp.erase(mp.find(right - left));
        mp.insert({nb - left, {left, nb}});
        mp.insert({right - nb, {nb, right}});
        cout << (--mp.end())->first << " ";
    }
}
int main(void)
{
    ll t;
    t = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (t--)
        solve();
}