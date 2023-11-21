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
	vector<int> arrival_time(n);
	vector<int> leaving_time(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arrival_time[i] >> leaving_time[i];
	}
	sort(ALL(arrival_time));
	sort(ALL(leaving_time));
	ll current_customers = 0, ans = 0;
	int i = 0, j = 0;
	while (j < n)
	{
		if (arrival_time[j] < leaving_time[i])
		{
			j++;
			current_customers++;
		}
		else if (arrival_time[j] > leaving_time[i])
		{
			i++;
			current_customers--;
		}
		ans = max(ans, current_customers);
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