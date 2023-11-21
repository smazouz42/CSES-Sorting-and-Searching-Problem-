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
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> applicants(n);
	vector<ll> apartments(m);
	for (ll i = 0; i < n; i++)
		cin >> applicants[i];
	for (ll i = 0; i < m; i++)
		cin >> apartments[i];
	sort(ALL(applicants));
	sort(ALL(apartments));
	ll ans = 0;
	ll i = 0, j = 0;
	while (i < n && j < m)
	{
		if (abs(abs(applicants[i]) - abs(apartments[j])) <= k)
		{
			ans++;
			i++;
			j++;
		}
		else if (applicants[i] < apartments[j])
			i++;
		else
			j++;
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