#include <bits/stdc++.h>

using namespace std;

void solve() {
  int l, a;
  cin >> l;
  a = l - 1;
  int n [a]; 

  for (int i = 0; i < a; i++)
  {
    cin >> n[i];
  }

  for (int i = 1; i < l; i++) {
    if (n[i - 1] != i) {
      cout << i << endl;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
}
