#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int x, a, m, d;
  cin >> x;
  a = (int)x / 365;
  x -= (a * 365);
  m = (int)x / 30;
  x -= (m * 30);
  d = x;
  cout << a << " ano(s)" << endl;
  cout << m << " mes(es)" << endl;
  cout << d << " dia(s)" << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
