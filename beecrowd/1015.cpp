#include <bits/stdc++.h>

using namespace std;

void solve()
{
  float a, b, c, d, ans;
  cin >> a >> c;
  cin >> b >> d;
  ans = sqrt(pow((b - a), 2) + pow((d - c), 2));
  cout << fixed << setprecision(4) << ans << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
