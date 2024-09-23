#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b, c, d;
  double e, f, ans;
  cin >> a >> b >> e;
  cin >> c >> d >> f;

  ans = (b * e) + (d * f);
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << ans << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
