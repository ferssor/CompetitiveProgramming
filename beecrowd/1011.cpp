#include <bits/stdc++.h>

using namespace std;

void solve()
{
  double PI = 3.14159;
  int r;
  cin >> r;
  double ans = (4.0 / 3.0) * PI * pow(r, 3);
  cout << "VOLUME = " << fixed << setprecision(3) << ans << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
