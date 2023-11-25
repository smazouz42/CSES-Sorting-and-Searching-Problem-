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
    ll n, m, x, y;
    cin >> n >> m;
    vector<ll> numbers(n + 1);
    map<ll, ll> position;
    for (int i = 1; i <= n; i++)
    {
        cin >> numbers[i];
        position[numbers[i]] = i;
    }
    ll ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (position[i] < position[i - 1])
            ans++;
    }
    for (int i = 0; i < m; i++)
    {
        vector<pair<ll, ll>> inversion(4);
        cin >> x >> y;
        if (numbers[x] != n)
            inversion[0] = {numbers[x], numbers[x] + 1};
        if (numbers[x] != 1)
            inversion[1] = {numbers[x] - 1, numbers[x]};
        if (numbers[y] != n)
            inversion[2] = {numbers[y], numbers[y] + 1};
        if (numbers[y] != 1)
            inversion[3] = {numbers[y] - 1, numbers[y]};
        sort(ALL(inversion));
        for(int i = 1; i < 4; i++){
            if(inversion[i].first == inversion[i - 1].first){
                inversion[i] = {0, 0};
            }
        }
        for(int i =0 ; i < 4;i++)
        {
            if(inversion[i].first != 0 && inversion[i].second != 0)
            {
                ans-= position[inversion[i].second] < position[inversion[i].first];
            }
        }
        swap(numbers[x], numbers[y]);
        position[numbers[x]] = x;
        position[numbers[y]] = y;
        for(int i =0 ; i < 4;i++)
        {
            if(inversion[i].first != 0 && inversion[i].second != 0)
            {
                ans+= position[inversion[i].second] < position[inversion[i].first];
            }
        }
        cout << ans << endl;
    }
}
int main(void)
{
    ll t;
    t = 1;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}