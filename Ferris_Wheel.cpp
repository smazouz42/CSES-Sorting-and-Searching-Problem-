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
#define ll long long
void solve()
{
	ll n, x;
	cin >> n >> x;
	vector<ll> weights(n);
	for (ll i = 0; i < n; i++)
		cin >> weights[i];
	sort(ALL(weights));
	ll ans = 0;
	ll i = 0, j = n - 1;
	while (i <= j)
	{
		if (weights[i] + weights[j] <= x)
		{
			i++;
			j--;
			ans++;
		}
		else
		{
			j--;
			ans++;
		}
	}
	cout << ans << endl;
}
int main(void)
{
	ll t;
	t = 1;
	while (t--)
		solve();
}