#include <bits/stdc++.h>

using namespace std;

void solve()
{
  double a, b, c, sol;
  cin >> a >> b >> c;
  sol = ((a * 2) + (b * 3) + (c * 5)) / 10;
  cout << "MEDIA = " << fixed << setprecision(1) << sol << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
