#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, h, m, s;
  cin >> n;
  h = (int)n / 3600;
  n -= (h * 3600);
  m = (int)n / 60;
  n -= (m * 60);
  s = n;
  cout << h << ":" << m << ":" << s << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
