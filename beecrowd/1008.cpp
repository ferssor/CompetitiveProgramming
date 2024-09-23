#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a, b;
  double c;
  cin >> a >> b >> c;
  cout << "NUMBER = " << a << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << b * c << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
