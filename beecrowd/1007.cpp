#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b, c, d, sol;
  cin >> a >> b >> c >> d;
  sol = (a * b) - (c * d);
  cout << "DIFERENCA = " << sol << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
