#include <bits/stdc++.h>

using namespace std;

void solve()
{
  string a;
  double b, c, ans;
  cin >> a >> b >> c;
  ans = b + (c * 0.15);
  cout << "TOTAL = R$ " << fixed << setprecision(2) << ans << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
