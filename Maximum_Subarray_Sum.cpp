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
	
	ll i = 0;
	ll tmp = 0;
	ll ans = -1e9;
	ll current_sum = 0;
	while (i < n)
	{
		if (tmp > 0)
		{
			current_sum += v[i];
			tmp += v[i];
		}
		else
		{
			current_sum = v[i];
			tmp = v[i];
		}
		ans = max(current_sum, ans);
		i++;
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