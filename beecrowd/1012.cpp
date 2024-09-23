#include <bits/stdc++.h>

using namespace std;

void solve()
{
  double PI = 3.14159;
  double a, b, c;
  cin >> a >> b >> c;
  cout << "TRIANGULO: " << fixed << setprecision(3) << (a * c) / 2 << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << PI * pow(c, 2) << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << (a + b) * (c / 2) << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << pow(b, 2) << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << a * b << endl;
};

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
