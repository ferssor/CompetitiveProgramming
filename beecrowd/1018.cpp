#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, curr;
  cin >> n;
  cout << n << endl;

  curr = (int)n / 100;
  cout << curr << " nota(s) de R$ 100,00" << endl;
  n -= (curr * 100);

  curr = (int)n / 50;
  cout << curr << " nota(s) de R$ 50,00" << endl;
  n -= (curr * 50);

  curr = (int)n / 20;
  cout << curr << " nota(s) de R$ 20,00" << endl;
  n -= (curr * 20);

  curr = (int)n / 10;
  cout << curr << " nota(s) de R$ 10,00" << endl;
  n -= (curr * 10);

  curr = (int)n / 5;
  cout << curr << " nota(s) de R$ 5,00" << endl;
  n -= (curr * 5);

  curr = (int)n / 2;
  cout << curr << " nota(s) de R$ 2,00" << endl;
  n -= (curr * 2);

  curr = (int)n / 1;
  cout << curr << " nota(s) de R$ 1,00" << endl;
  n -= (curr * 1);
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
