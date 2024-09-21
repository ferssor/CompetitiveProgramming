#include <bits/stdc++.h>

using namespace std;

void solve()
{
  double a, b;
  cin >> a >> b;
  double res = ((a * 3.5) + (b * 7.5)) / 11.0;
  cout << "MEDIA = " << fixed << setprecision(5) << res << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
