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
	ll n;
	cin >> n;
	ll counter = n;
	vector<ll> already_used(n + 1);
	ll i = 2;
	ll ndx = 1;
	n++;
	while (counter)
	{
		i %= n;
		if (i == 0)
			i++;
		if (!already_used[i] && ndx == 1)
		{
			cout << i << " ";
			already_used[i] = 1;
			counter--;
			ndx = 0;
		}
		else if (!already_used[i])
			ndx++;
		i++;
	}
	cout << endl;
}
int main(void)
{
	ll t;
	t = 1;
	while (t--)
		solve();
}